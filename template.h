#ifndef TEMPLATE_H
#define TEMPLATE_H

#define CAT(X, Y) X##_##Y
#define TEMPLATE(X, Y) CAT(X, Y)
#define PTR(X) CAT(X, ptr)

#endif // TEMPLATE_H