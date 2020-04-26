int blue = D5;



void eventPublished(const char *event, const char *data);

void setup()
{
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", eventPublished);
    
    pinMode(blue, OUTPUT);
    digitalWrite(blue, LOW);

}

void eventPublished(const char *event, const char *data)
{
    

if (strcmp(data, "wave") == 0)
{
//  wave
    digitalWrite(blue, HIGH);
    delay(100);
    digitalWrite(blue, LOW);
    delay(100);    
    digitalWrite(blue, HIGH);
    delay(100);
    digitalWrite(blue, LOW);
    delay(100);
    digitalWrite(blue, HIGH);
    delay(100);
    digitalWrite(blue, LOW);
    delay(100); 
    digitalWrite(blue, HIGH);
    delay(100);
    digitalWrite(blue, LOW);
    delay(100);    
    digitalWrite(blue, HIGH);
    delay(100);
    digitalWrite(blue, LOW);
    delay(100);
    digitalWrite(blue, HIGH);
    delay(100);
    digitalWrite(blue, LOW);
    delay(100);   
}

}
void loop()
{

}