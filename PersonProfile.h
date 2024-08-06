

class PersonProfile{
PersonProfile(std::string name, std::string email);
//This constructs a PersonProfile object, specifying the member’s name and email address.
~PersonProfile();
//You may define a destructor for PersonProfile if you need one.
std::string GetName() const;
The GetName method returns the member’s name.
std::string GetEmail() const;
The GetEmail method returns the member’s email address.
void AddAttValPair(const AttValPair& attval)
The AddAttValPair method is used to add a new attribute-value pair to the member’s profile. If
the person’s profile already has an attribute-value pair with the same attribute and value as the
attval parameter, then this method should do nothing. More than one attribute-value pair in the
map can have the same attribute, as long as their corresponding values are different. We place
no requirements on the order that you must store your attribute-value pairs.
AttValPair is a struct we give you in provided.h.
Here’s how this might be used:
void makePersonARockClimber(PersonProfile& p) {
 AttValPair av(“hobby”,”rock climbing”)
 p.AddAttValPair(av);
}
int GetNumAttValPairs() const
This method returns the total number of distinct attribute-value pairs associated with this
member.
bool GetAttVal(int attribute_num, AttValPair& attval) const
This method gets the attribute-value pair specified by attribute_num (where 0 <= attribute_num
< GetNumAttValPairs()) and places it in the attval parameter. The method returns true if it
successfully retrieves an attribute; otherwise, it returns false and leaves attval unchanged. If you
write a loop like this
5
PersonProfile pp("Carey Nachenberg", "climberkip@gmail.com");
... // Add some attribute-value pairs to pp
for (int k = 0; k != pp.GetNumAttValPairs(); k++) {
 AttValPair av;
 pp.GetAttVal(k, av);
 std::cout << av.attribute << " -> " << av.value << std::endl;
 }
}