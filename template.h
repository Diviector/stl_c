#ifndef TEMPLATE_H
#define TEMPLATE_H

#define CAT(X,Y) X##_##Y
#define TEMPLATE(X,Y) CAT(X,Y)
#define PTR(X) CAT(X,p)
#define PTR2(X) CAT(X,2p)

#endif // TEMPLATE_H