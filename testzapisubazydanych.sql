--
-- Plik wygenerowany przez SQLiteStudio v3.2.1 dnia pt. wrz 11 16:13:16 2020
--
-- U¿yte kodowanie tekstu: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- Tabela: Houses
CREATE TABLE Houses (houseId INTEGER PRIMARY KEY, Type INT, Floors INT, RadiatorType INT, FloorSize INT, RadiatorSize INT, RadiatorsType INT, FamilySize INT, WaterPointsHC INT, WaterPointsC INT, Shit INT);

-- Tabela: Users
CREATE TABLE Users (userID INTEGER PRIMARY KEY, FirstName TEXT, LastName TEXT, Number TEXT, Email TEXT, Adres TEXT);
INSERT INTO Users (userID, FirstName, LastName, Number, Email, Adres) VALUES (101, 'Dariusz', 'Ziolkowski', '883000568', 'darzio94@gmail.com', 'Sk³odowska 92/35 Bydgoszcz');

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;
