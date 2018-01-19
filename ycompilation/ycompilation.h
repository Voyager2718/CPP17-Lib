// Determine if 2 values are of the same type.
template<class T1, class T2>
bool sameType(T1 t1, T2 t2){return true;}
template<class T>
bool sameType(T t1, T t2){return false;}
