COMPILER = gcc
OPTIONS = -Wall -lpthread
SERVER = server.out
CLIENT = client.out

runServer: $(SERVER)
	./$(SERVER)

runClient: $(CLIENT)
	./$(CLIENT)

$(SERVER): server.cpp
	$(COMPILER) $(OPTIONS) server.cpp -o $(SERVER)

$(CLIENT): client.cpp
	$(COMPILER) $(OPTIONS) client.cpp -o $(CLIENT)

clean:
	rm *.out