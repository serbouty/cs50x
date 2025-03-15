-- DROP DATABASE IF EXISTS mydb;

CREATE DATABASE mydb
    WITH
    OWNER = postgres                    -- Limited privileges.
    TEMPLATE = template0                -- Recommended template.
    ENCODING = 'UTF8'                   -- Large compatibility, heavy on memory.
    LC_COLLATE = 'French_France.1252'   -- Operating system's C library.
    LC_CTYPE = 'French_France.1252'     -- Operating system's C library.   
    LOCALE_PROVIDER = 'libc'            -- Operating system's C library.
    TABLESPACE = pg_default             -- Default tablespace.
    CONNECTION LIMIT = -1               -- No limit for concurrent connections. 
    IS_TEMPLATE = False;                -- Cannot be cloned.