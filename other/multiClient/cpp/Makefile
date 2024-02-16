COMPILER = g++
OPTIONS = -Wall
SERVER = server.out
CLIENT = client.out
LIBOPTIONS = -lpthread -lrt

runServer: $(SERVER)
	./$(SERVER)

runClient: $(CLIENT)
	./$(CLIENT)

$(SERVER): server.cpp
	$(COMPILER) $(OPTIONS) server.cpp -o $(SERVER) $(LIBOPTIONS)

$(CLIENT): client.cpp
	$(COMPILER) $(OPTIONS) client.cpp -o $(CLIENT) $(LIBOPTIONS)

clean:
	rm *.out
