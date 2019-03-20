CREATE TABLE object_index(
id INT,
object_name VARCHAR(255),
CONSTRAINT pk_object_index PRIMARY KEY (id)
);

CREATE TABLE storage_media(
id INT,
storage_media_name VARCHAR(255)
);

CREATE TABLE console(
id INT,
console_name VARCHAR(255),
release_year DATE,
quantity_total INT,
quantity_checked_out INT,
storage_media INT,
PRIMARY KEY (id)
);

CREATE TABLE peripheral(
id INT,
peripheral_name VARCHAR(255),
quantity_total INT,
quantity_checked_out INT,
compatible_console INT,
object INT,
PRIMARY KEY (id)
);

CREATE TABLE genre(
id INT,
genre VARCHAR(255), 
PRIMARY KEY (genre)
); 

CREATE TABLE game(
id INT,
game_name VARCHAR(255),
compatible_console INT,
genre INT,
quantity_total INT,
quantity_checked_out INT,
PRIMARY KEY (id)
);
