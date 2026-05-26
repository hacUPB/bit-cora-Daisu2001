for (int i = 0; i < 5; ++i) {
    Particle* p = new Particle();
    p->size = ofRandom(3.0f, 6.0f);  
    p->color = ofColor(0, 255, 0);   
    p->velocity *= 3.0f;             
    particles.push_back(p);
    addObserver(p);
}