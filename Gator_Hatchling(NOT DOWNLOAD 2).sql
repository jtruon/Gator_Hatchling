-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema Gator_HatchlingDB
-- -----------------------------------------------------
-- Gator_Hatchling Project's Database
-- This is the LMS database
DROP SCHEMA IF EXISTS `Gator_HatchlingDB` ;

-- -----------------------------------------------------
-- Schema Gator_HatchlingDB
--
-- Gator_Hatchling Project's Database
-- This is the LMS database
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `Gator_HatchlingDB` DEFAULT CHARACTER SET utf8 ;
USE `Gator_HatchlingDB` ;

-- -----------------------------------------------------
-- Table `Gator_HatchlingDB`.`Student`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Gator_HatchlingDB`.`Student` ;

CREATE TABLE IF NOT EXISTS `Gator_HatchlingDB`.`Student` (
  `Student_id` INT NOT NULL,
  `Student_fname` VARCHAR(45) NOT NULL,
  `Student_lname` VARCHAR(45) NOT NULL,
  `Student_email` VARCHAR(45) NULL,
  `Student_phone` VARCHAR(45) NULL,
  `Student_password` VARCHAR(45) NULL,
  PRIMARY KEY (`Student_id`),
  UNIQUE INDEX `Student_id_UNIQUE` (`Student_id` ASC))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Gator_HatchlingDB`.`Course`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Gator_HatchlingDB`.`Course` ;

CREATE TABLE IF NOT EXISTS `Gator_HatchlingDB`.`Course` (
  `Course_id` INT NOT NULL,
  `Course_name` VARCHAR(45) NOT NULL,
  `Course_credit` INT NULL,
  PRIMARY KEY (`Course_id`),
  UNIQUE INDEX `Course_id_UNIQUE` (`Course_id` ASC))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Gator_HatchlingDB`.`Record`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Gator_HatchlingDB`.`Record` ;

CREATE TABLE IF NOT EXISTS `Gator_HatchlingDB`.`Record` (
  `Student_Course_id` INT NOT NULL,
  `Student_id` INT NOT NULL,
  `Course_id` INT NOT NULL,
  `Student_grade` INT NOT NULL,
  `Student_exam` VARCHAR(45) NULL,
  PRIMARY KEY (`Student_Course_id`),
  INDEX `fk_Student_has_Course_Course1_idx` (`Course_id` ASC),
  INDEX `fk_Student_has_Course_Student_idx` (`Student_id` ASC),
  UNIQUE INDEX `Student_has_Course_grade_UNIQUE` (`Student_Course_id` ASC),
  CONSTRAINT `fk_Student_has_Course_Student`
    FOREIGN KEY (`Student_id`)
    REFERENCES `Gator_HatchlingDB`.`Student` (`Student_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Student_has_Course_Course1`
    FOREIGN KEY (`Course_id`)
    REFERENCES `Gator_HatchlingDB`.`Course` (`Course_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Gator_HatchlingDB`.`Admin_login`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Gator_HatchlingDB`.`Admin_login` ;

CREATE TABLE IF NOT EXISTS `Gator_HatchlingDB`.`Admin_login` (
  `idAdmin_login` INT NOT NULL,
  `Adminlogin_pass` VARCHAR(45) NULL,
  PRIMARY KEY (`idAdmin_login`))
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
