//
//  SafeKeyPath.h
//  KeyPathTest
//
//  Created by iOSleep on 2017/12/2.
//  Copyright © 2017年 xxoo. All rights reserved.
//

#ifndef SafeKeyPath_h
#define SafeKeyPath_h

#define __zk_macro_concat(A, B)     __zk_macro_concat_(A, B)
#define __zk_macro_argcount(...)    __zk_macro_at(6, __VA_ARGS__, 6, 5, 4, 3, 2, 1)
#define __zk_macro_head(...)        __zk_macro_head_(__VA_ARGS__, 0)
#define __zk_macro_at(N, ...)       __zk_macro_concat(__zk_macro_at, N)(__VA_ARGS__)

#define __zk_macro_at0(...) __zk_macro_head(__VA_ARGS__)
#define __zk_macro_at1(_0, ...) __zk_macro_head(__VA_ARGS__)
#define __zk_macro_at2(_0, _1, ...) __zk_macro_head(__VA_ARGS__)
#define __zk_macro_at3(_0, _1, _2, ...) __zk_macro_head(__VA_ARGS__)
#define __zk_macro_at4(_0, _1, _2, _3, ...) __zk_macro_head(__VA_ARGS__)
#define __zk_macro_at5(_0, _1, _2, _3, _4, ...) __zk_macro_head(__VA_ARGS__)
#define __zk_macro_at6(_0, _1, _2, _3, _4, _5, ...) __zk_macro_head(__VA_ARGS__)

#define ClassKeyPath(Class, ...)    __zk_macro_concat(ZKClassKeyPath, __zk_macro_argcount(__VA_ARGS__))(Class, __VA_ARGS__)

#define ZKClassKeyPath0(Class) ((Class *)nil)
#define ZKClassKeyPath1(Class, path0) ((void)(((Class *)nil).path0), @#path0)
#define ZKClassKeyPath2(Class, path0, path1) ((void)(((Class *)nil).path0.path1), @#path0 "." #path1)
#define ZKClassKeyPath3(Class, path0, path1, path2) ((void)(((Class *)nil).path0.path1.path2), @#path0 "." #path1 "." #path2)
#define ZKClassKeyPath4(Class, path0, path1, path2, path3) ((void)(((Class *)nil).path0.path1.path2.path3), @#path0 "." #path1 "." #path2 "." #path3)
#define ZKClassKeyPath5(Class, path0, path1, path2, path3, path4) ((void)(((Class *)nil).path0.path1.path2.path3.path4), @#path0 "." #path1 "." #path2 "." #path3 "." #path4)
#define ZKClassKeyPath6(Class, path0, path1, path2, path3, path4, path5) ((void)(((Class *)nil).path0.path1.path2.path3.path4.path5), @#path0 "." #path1 "." #path2 "." #path3 "." #path4 "." #path5)


#define KeyPath(item, ...)    __zk_macro_concat(ZKKeyPath, __zk_macro_argcount(__VA_ARGS__))(item, __VA_ARGS__)

#define ZKKeyPath0(object) (object)
#define ZKKeyPath1(object, path0) ((void)((object).path0), @#path0)
#define ZKKeyPath2(object, path0, path1) ((void)((object).path0.path1), @#path0 "." #path1)
#define ZKKeyPath3(object, path0, path1, path2) ((void)((object).path0.path1.path2), @#path0 "." #path1 "." #path2)
#define ZKKeyPath4(object, path0, path1, path2, path3) ((void)((object).path0.path1.path2.path3), @#path0 "." #path1 "." #path2 "." #path3)
#define ZKKeyPath5(object, path0, path1, path2, path3, path4) ((void)((object).path0.path1.path2.path3.path4), @#path0 "." #path1 "." #path2 "." #path3 "." #path4)
#define ZKKeyPath6(object, path0, path1, path2, path3, path4, path5) ((void)((object).path0.path1.path2.path3.path4.path5), @#path0 "." #path1 "." #path2 "." #path3 "." #path4 "." #path5)


#define __zk_macro_concat_(A, B) A ## B
#define __zk_macro_head_(FIRST, ...) FIRST

#endif /* SafeKeyPath_h */
