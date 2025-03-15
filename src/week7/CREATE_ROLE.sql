-- DROP ROLE IF EXISTS "Karim";

CREATE ROLE "Karim"			-- Superuser.
	WITH		
	LOGIN
	SUPERUSER
	CREATEDB
	CREATEROLE
	INHERIT                 -- Inherit rights from the parent roles.
	REPLICATION             -- Can initiate streaming replication and backups.
	BYPASSRLS
	CONNECTION LIMIT -1;	-- No limit for concurrent connections.