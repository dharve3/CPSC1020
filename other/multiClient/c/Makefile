COMPILER = gcc
OPTIONS = -Wall
SERVER = server.out
CLIENT = client.out
LIBOPTIONS = -lpthread -lrt

runServer: $(SERVER)
	./$(SERVER)

runClient: $(CLIENT)
	./$(CLIENT)

$(SERVER): server.c
	$(COMPILER) $(OPTIONS) server.c -o $(SERVER) $(LIBOPTIONS)

$(CLIENT): client.c
	$(COMPILER) $(OPTIONS) client.c -o $(CLIENT) $(LIBOPTIONS)

clean:
	rm *.out
