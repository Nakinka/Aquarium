#include "pch.h"
#include "Aquarium.h"
#include "AquariumVisitor.h"
#include "AquariumStaff.h"
#include "MarineFish.h"
#include "FreshWaterFish.h"
#include "AquaticPlant.h"
#include "MarineInvertebrate.h"


using namespace testing::internal;

TEST(addFish,Test1) {
	Aquarium aquarium("Test Aquarium", 5);

	aquarium.addFish("Goldfish");
	aquarium.addFish("Guppy");

	EXPECT_EQ(aquarium.getFishCount(), 2);
}

TEST(removeFish, Test2) {
	Aquarium aquarium("Test Aquarium", 5);

	aquarium.addFish("Goldfish");
	aquarium.addFish("Guppy");
	aquarium.removeFish("Goldfish");

	EXPECT_EQ(aquarium.getFishCount(), 1);
}

TEST(addWater, test3) {
	Aquarium aquarium("Test Aquarium", 10);

	aquarium.addWater(10);

	EXPECT_EQ(aquarium.getWaterLevel(), 10);
}

TEST(removeWater,test4) {
	Aquarium aquarium("Test Aquarium", 5);

	aquarium.addWater(5);
	aquarium.removeWater(5);

	EXPECT_EQ(aquarium.getWaterLevel(), 0);
}

TEST(getInf,test5){
	Aquarium aquarium("Test Aquarium", 100);
	aquarium.addFish("Goldfish");
	aquarium.addFish("Guppy");
	aquarium.addWater(50);
	
	CaptureStdout();
	aquarium.getAquariumInf();
	string output = GetCapturedStdout();
	
	string expectedOutput =
	"Aquarium Name: Test Aquarium\n"
	"Capacity: 100\n"
	"Fish count: 2\n"
	"Water level: 50\n";
	
	EXPECT_EQ(output, expectedOutput);
}

TEST(addWater2, test6) {
	Aquarium aquarium("Test Aquarium", 100);

	CaptureStdout();
	aquarium.addWater(120);
	string output = GetCapturedStdout();

	string expectedOutput =
		"Cannot add water. The aquarium will overflow\n";

	EXPECT_EQ(output, expectedOutput);
}

TEST(removeWater2, test6) {
	Aquarium aquarium("Test Aquarium", 100);

	CaptureStdout();
	aquarium.removeWater(120);
	string output = GetCapturedStdout();

	string expectedOutput =
		"Not enough water in the aquarium to remove\n";

	EXPECT_EQ(output, expectedOutput);
}

TEST(removeFish2, test6) {
	Aquarium aquarium("Test Aquarium", 100);
	aquarium.addFish("Goldfish");
	aquarium.addFish("Guppy");

	CaptureStdout();
	aquarium.removeFish("Test fish");
	string output = GetCapturedStdout();

	string expectedOutput =
		"Test fish is not in the aquarium.\n";

	EXPECT_EQ(output, expectedOutput);
}

TEST(useTicket, test7) {
	AquariumVisitor ticket("Kate", 30);

	EXPECT_FALSE(ticket.isTicketUsed());

	ticket.useTicket();

	EXPECT_TRUE(ticket.isTicketUsed());
}

TEST(displayTicketInf, test8) {
	AquariumVisitor ticket("Kate", 25);

	CaptureStdout();
	ticket.displayTicketInf();
	string output = GetCapturedStdout();

	string expectedOutput =
		"Visitor name: Kate\n"
		"Ticket price: 25\n"
		"Ticket status: Unused\n";
	

	EXPECT_EQ(output, expectedOutput);
}

TEST(displayTicketInf1, test9) {
	AquariumVisitor ticket("Kate", 30);
	ticket.useTicket();
	CaptureStdout();
	ticket.useTicket();
	ticket.displayTicketInf();
	string output = GetCapturedStdout();

	string expectedOutput =
		"Ticket has already been used.\n"
		"Visitor name: Kate\n"
		"Ticket price: 30\n"
		"Ticket status: Used\n";


	EXPECT_EQ(output, expectedOutput);
}

TEST(displayInfStuff, test10) {
	AquariumStaff stuff("Bob", "Cashier");

	CaptureStdout();
	stuff.displayStaffInf();
	string output = GetCapturedStdout();

	string expectedOutput =
		"Staff Name: Bob\n"
		"Position: Cashier\n";

	EXPECT_EQ(output, expectedOutput);
}

TEST(doWork, test11) {
	AquariumStaff stuff("Bob", "Cashier");

	CaptureStdout();
	stuff.doAquariumWork("closes the cash register");
	string output = GetCapturedStdout();

	string expectedOutput =
		"Staff Bob is performing task: closes the cash register\n";

	EXPECT_EQ(output, expectedOutput);
}

TEST(isWorking, test12) {
	AquariumStaff stuff("Bob", "Cashier");

	EXPECT_FALSE(stuff.isWorking());
}

TEST(SwimTest,test13) {
	MarineFish myFish("Marlin", "Blue");

	CaptureStdout();  
	myFish.swim();
	string output = GetCapturedStdout();
	
	string expectedOutput =
		"The Marlin is swimming in the ocean\n";
	EXPECT_EQ(output,expectedOutput);
}

TEST(EatTest,test14) {
	MarineFish myFish("Marlin", "Blue");

	CaptureStdout();  
	myFish.eat("plankton");
	string output = GetCapturedStdout();

	string expectedOutput =
		"The Marlin is eating plankton in the ocean\n";

	EXPECT_EQ(output, expectedOutput);
}

TEST(FreshWaterFishSwimTest,test15) {
	FreshWaterFish myFish("Trout","Brown");

	CaptureStdout();  
	myFish.swim();
	string output = GetCapturedStdout();

	string expectedOutput =
		"The freshwater fish named Trout is swimming\n";


	EXPECT_EQ(output, expectedOutput);
}

TEST(FreshWaterFishEatTest,test16) {
	FreshWaterFish myFish("Trout", "Brown");
	CaptureStdout();  
	myFish.eat("insects");
	string output = GetCapturedStdout();

	string expectedOutput =
		"The freshwater fish named Trout is eating insects\n";

	EXPECT_EQ(output, expectedOutput);
}

TEST(FreshWaterFishBreatheTest,test17) {
	FreshWaterFish myFish("Trout", "Brown");
	CaptureStdout();  
	myFish.brethe();
	string output = GetCapturedStdout();

	string expectedOutput =
		"The freshwater fish named Trout is breathing\n";


	EXPECT_EQ(output, expectedOutput);
}

TEST(FreshWaterFishReproduceTest,test18) {
	FreshWaterFish myFish("Trout", "Brown");

	CaptureStdout();
	myFish.reproduce();
	string output = GetCapturedStdout();

	string expectedOutput =
		"The freshwater fish named Trout is reproducing\n";

	EXPECT_EQ(output, expectedOutput);
}

TEST(AddCoral,test19) {
	Aquarium aquarium("Test Aquarium", 5);
	Coral redCoral("Red");
	Coral blueCoral("Blue");
	
	aquarium.addCoral(redCoral);
	aquarium.addCoral(blueCoral);
	
	EXPECT_EQ(aquarium.getCoralCount(), 2);
}

TEST(RemoveCoral,test20) {
	Aquarium aquarium("Test Aquarium", 5);
	Coral redCoral("Red");
	Coral blueCoral("Blue");
	
	aquarium.addCoral(redCoral);
	aquarium.addCoral(blueCoral);
	
	aquarium.removeCoral(redCoral);
	
	EXPECT_EQ(aquarium.getCoralCount(), 1);
	EXPECT_TRUE(aquarium.isCoralInAquarium());
}

TEST(PrintAquariumInfCoral,test21) {
	Aquarium aquarium("Test Aquarium", 5);
	Coral redCoral("Red");
	Coral blueCoral("Blue");
	
	aquarium.addCoral(redCoral);
	aquarium.addCoral(blueCoral);
	
	CaptureStdout();
	aquarium.printAquariumInfoCorals();
	string output = GetCapturedStdout();
	
	string expectedOutput =
		"Aquarium information for corals:\n"
		"Total corals: 2\n"
		"Coral in aquarium: Yes\n"
		"Colors of corals in aquarium:\n- Red\n- Blue\n";

    EXPECT_EQ(output,expectedOutput);
}

TEST(GettersAndSetters,test22) {
	AquaticPlant plant("Water Lily", 0.5);

	EXPECT_EQ(plant.getName(), "Water Lily");
	EXPECT_DOUBLE_EQ(plant.getHeight(), 0.5);

	plant.setHeight(1.0);
	EXPECT_DOUBLE_EQ(plant.getHeight(), 1.0);
}

TEST(AquaticPlantGrow,test23) {
	AquaticPlant plant("Water Lily", 0.5);

	plant.grow(0.2);
	EXPECT_DOUBLE_EQ(plant.getHeight(), 0.7);

	plant.grow(0.3);
	EXPECT_DOUBLE_EQ(plant.getHeight(), 1.0);
}

TEST(AccessorsAndMutators,test24) {
	
	MarineInvertebrate invertebrate("Species", "Habitat", 1);

	
	EXPECT_EQ(invertebrate.getSpecies(), "Species");
	EXPECT_EQ(invertebrate.getHabitat(), "Habitat");
	EXPECT_EQ(invertebrate.getIdAquarium(), 1);

	invertebrate.setSpecies("New Species");
	invertebrate.setHabitat("New Habitat");
	invertebrate.setAquariumId(2);

	EXPECT_EQ(invertebrate.getSpecies(), "New Species");
	EXPECT_EQ(invertebrate.getHabitat(), "New Habitat");
	EXPECT_EQ(invertebrate.getIdAquarium(), 2);
}


TEST(DisplayInformationBrate,test25) {
	MarineInvertebrate invertebrate("Species", "Habitat", 1);

	CaptureStdout();
	invertebrate.displayInf();
	string output = GetCapturedStdout();

	string expectedOutput =
		"Species: Species\nHabitat: Habitat\nAquarium ID: 1\n";
	
	EXPECT_EQ(output,expectedOutput);
}

TEST(GetInfVeterinarian,test26) {
	Veterinarian vet("Alice", 3);

	CaptureStdout();
	vet.getInfo();
	string output = GetCapturedStdout();

	string expectedOutput =
		"Name: Alice\n"
		"Experience: 3 years\n";

	EXPECT_EQ(output, expectedOutput);
}



TEST(VeterinarianCount,test27) {
	Aquarium aquarium("Test Aquarium", 5);

	EXPECT_EQ(aquarium.getVeterinarianCount(), 0);

	Veterinarian vet1("Alice", 3);
	aquarium.addVeterianarian(vet1);
	EXPECT_EQ(aquarium.getVeterinarianCount(), 1);

	Veterinarian vet2("Jane", 5);
	aquarium.addVeterianarian(vet2);
	EXPECT_EQ(aquarium.getVeterinarianCount(), 2);
}
