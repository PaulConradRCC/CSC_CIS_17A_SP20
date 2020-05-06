#ifndef SAMPLE_BASE_H
#define SAMPLE_BASE_H

class sample_base {
public:
    sample_base();
    sample_base(const sample_base& orig);
    virtual ~sample_base();
    
    void SetZ(long int z);
    long int GetZ() const;
    void SetY(int y);
    int GetY() const;
    void SetX(float x);
    float GetX() const;

    float x;

protected:
    int y;
    
private:
    long int z;

};

#endif /* SAMPLE_BASE_H */

