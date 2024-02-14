COMPILER = g++
OPTIONS = -Wall -lsocket -lnsl
CLIENT = client.out
SERVER = server.out

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