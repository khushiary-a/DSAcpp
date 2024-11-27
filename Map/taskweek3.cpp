  #include<iostream>
  #include<map>
  using namespace std ;

struct Contact {
      std::string name;
      std::string phoneNumber;
      std::string email;
      Contact(string nm , string phn , string em){
        name = nm;
        phoneNumber = phn;
        email = em;
      }

};

      class ContactManager {
      private:
          std::map<std::string, Contact> contacts; // Keyed by phone number
      public:
          void addContact(const Contact& contact){
            
            contacts.insert({contact.phoneNumber, contact});
          }
          void updateContact(const std::string& phoneNumber, const Contact& updatedContact){
             
          }
          void deleteContact(const std::string& phoneNumber){
         
          }
          Contact searchContact(const std::string& phoneNumber){

          }
          void displayContacts() {

          }
     
      };
int main(){
    
    return 0;
}


