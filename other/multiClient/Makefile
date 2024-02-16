COMPILER = gcc
OPTIONS = -Wall -lpthread -lrt
SERVER = server.out
CLIENT = client.out

runServer: $(SERVER)
	./$(SERVER)

runClient: $(CLIENT)
	./$(CLIENT)

$(SERVER): server.c
	$(COMPILER) $(OPTIONS) server.c -o $(SERVER)

$(CLIENT): client.c
	$(COMPILER) $(OPTIONS) client.c -o $(CLIENT)

clean:
	rm *.out
