BYTES_PER_SECTOR ?= 4096
SECTOR_COUNT ?= 256
BLOCK_SIZE ?= 128 # Erase block size

CC = gcc
CFLAGS = -Wall

FAT_DIR = ../../lib_filesystem/src/file_systems/petit_fatfs
FAT_SRC = $(FAT_DIR)/pff.c

TEST_APP_SRC = 	src/main.c \
								src/diskio.c

APP_NAME = petit_fatfs_test

BUILD_OPTIONS = -DBYTES_PER_SECTOR=$(BYTES_PER_SECTOR) \
								-DSECTOR_COUNT=$(SECTOR_COUNT) \
								-DBLOCK_SIZE=$(BLOCK_SIZE) \
								-DDISK_IMAGE=0 \
								-DDISKIO_INFO=1 \
								-DDISKIO_DEBUG=1 \
								-DFATFS_INFO=1

all:
	$(CC) $(CFLAGS) -I$(FAT_DIR) $(FAT_SRC) $(TEST_APP_SRC) $(BUILD_OPTIONS) -o $(APP_NAME)

.PHONY: clean

clean:
	rm -f $(APP_NAME)
