; FUN_005ad1f0  005ad1f0
005ad1f0  PUSH EBP
005ad1f1  MOV EBP,ESP
005ad1f3  PUSH -0x1
005ad1f5  PUSH 0x6a7cbc
005ad1fa  MOV EAX,FS:[0x0]
005ad200  PUSH EAX
005ad201  SUB ESP,0x34
005ad204  MOV EAX,[0x00781870]
005ad209  XOR EAX,EBP
005ad20b  PUSH EAX
005ad20c  LEA EAX,[EBP + -0xc]
005ad20f  MOV FS:[0x0],EAX
005ad215  MOV dword ptr [EBP + -0x30],ECX
005ad218  MOV EAX,dword ptr [EBP + 0x8]
005ad21b  PUSH EAX
005ad21c  MOV ECX,dword ptr [0x00793604]
005ad222  CALL 0x005b4e50
005ad227  MOV dword ptr [EBP + -0x10],EAX
005ad22a  CMP dword ptr [EBP + 0xc],-0x1
005ad22e  JNZ 0x005ad23f
005ad230  MOV ECX,dword ptr [0x00793604]
005ad236  MOV EDX,dword ptr [ECX + 0x5bc]
005ad23c  MOV dword ptr [EBP + 0xc],EDX
005ad23f  MOV EAX,dword ptr [EBP + 0x8]
005ad242  PUSH EAX
005ad243  CALL 0x005dcb00
005ad248  ADD ESP,0x4
005ad24b  MOV dword ptr [EBP + -0x2c],EAX
005ad24e  MOV ECX,dword ptr [EBP + -0x2c]
005ad251  CALL 0x0063aac0
005ad256  MOV ECX,dword ptr [EAX]
005ad258  MOV dword ptr [EBP + -0x24],ECX
005ad25b  CMP dword ptr [EBP + -0x24],0x2
005ad25f  JZ 0x005ad27d
005ad261  MOV ECX,dword ptr [EBP + -0x2c]
005ad264  CALL 0x0063aac0
005ad269  MOV EDX,dword ptr [EAX]
005ad26b  MOV dword ptr [EBP + -0x28],EDX
005ad26e  CMP dword ptr [EBP + -0x28],0x3
005ad272  JZ 0x005ad27d
005ad274  MOV dword ptr [EBP + -0x34],0x0
005ad27b  JMP 0x005ad284
005ad27d  MOV dword ptr [EBP + -0x34],0x1
005ad284  MOVZX EAX,byte ptr [EBP + -0x34]
005ad288  TEST EAX,EAX
005ad28a  JZ 0x005ad2eb
005ad28c  PUSH -0x1
005ad28e  MOV ECX,dword ptr [0x007947e0]
005ad294  CALL 0x005df7b0
005ad299  MOVZX ECX,AL
005ad29c  TEST ECX,ECX
005ad29e  JZ 0x005ad2eb
005ad2a0  MOVZX EDX,byte ptr [EBP + 0x10]
005ad2a4  TEST EDX,EDX
005ad2a6  JZ 0x005ad2eb
005ad2a8  MOV EAX,dword ptr [EBP + -0x30]
005ad2ab  MOVZX ECX,byte ptr [EAX + 0x19]
005ad2af  TEST ECX,ECX
005ad2b1  JNZ 0x005ad2eb
005ad2b3  MOV EDX,dword ptr [EBP + 0x8]
005ad2b6  PUSH EDX
005ad2b7  MOV ECX,dword ptr [0x007935f4]
005ad2bd  CALL 0x005a4b20
005ad2c2  CMP dword ptr [EBP + 0xc],EAX
005ad2c5  JZ 0x005ad2eb
005ad2c7  MOV ECX,dword ptr [0x007935f8]
005ad2cd  CALL 0x005a80d0
005ad2d2  MOV EAX,dword ptr [EBP + -0x30]
005ad2d5  MOV byte ptr [EAX + 0x19],0x1
005ad2d9  MOV ECX,dword ptr [0x00793578]
005ad2df  CALL 0x0057c140
005ad2e4  XOR AL,AL
005ad2e6  JMP 0x005ad4ce
005ad2eb  MOV ECX,dword ptr [EBP + -0x30]
005ad2ee  MOV byte ptr [ECX + 0x19],0x0
005ad2f2  MOV EDX,dword ptr [0x00793604]
005ad2f8  MOV EAX,dword ptr [EBP + 0xc]
005ad2fb  MOV dword ptr [EDX + 0x5bc],EAX
005ad301  MOV ECX,dword ptr [EBP + -0x30]
005ad304  MOV byte ptr [ECX + 0xd],0x1
005ad308  MOV EDX,dword ptr [EBP + 0xc]
005ad30b  MOV dword ptr [EBP + -0x38],EDX
005ad30e  CMP dword ptr [EBP + -0x38],0x4
005ad312  JA 0x005ad4b1
005ad318  MOV EAX,dword ptr [EBP + -0x38]
005ad31b  JMP dword ptr [EAX*0x4 + 0x5ad4e0]
005ad322  MOV ECX,dword ptr [EBP + 0x8]
005ad325  PUSH ECX
005ad326  MOV ECX,dword ptr [EBP + -0x30]
005ad329  CALL 0x005aee50
005ad32e  JMP 0x005ad4cc
005ad333  PUSH 0x1
005ad335  MOV EDX,dword ptr [0x00793600]
005ad33b  MOV EAX,dword ptr [EDX + 0x4]
005ad33e  MOV ECX,dword ptr [0x00793600]
005ad344  MOV ECX,dword ptr [ECX + 0x4]
005ad347  MOV EDX,dword ptr [EAX]
005ad349  MOV EAX,dword ptr [EDX + 0x4]
005ad34c  CALL EAX
005ad34e  PUSH 0x28
005ad350  CALL 0x00686d82
005ad355  ADD ESP,0x4
005ad358  MOV dword ptr [EBP + -0x18],EAX
005ad35b  MOV dword ptr [EBP + -0x4],0x0
005ad362  CMP dword ptr [EBP + -0x18],0x0
005ad366  JZ 0x005ad37f
005ad368  MOV ECX,dword ptr [0x00793600]
005ad36e  MOV EDX,dword ptr [ECX + 0x4]
005ad371  PUSH EDX
005ad372  MOV ECX,dword ptr [EBP + -0x18]
005ad375  CALL 0x005ab7f0
005ad37a  MOV dword ptr [EBP + -0x3c],EAX
005ad37d  JMP 0x005ad386
005ad37f  MOV dword ptr [EBP + -0x3c],0x0
005ad386  MOV EAX,dword ptr [EBP + -0x3c]
005ad389  MOV dword ptr [EBP + -0x14],EAX
005ad38c  MOV dword ptr [EBP + -0x4],0xffffffff
005ad393  MOV ECX,dword ptr [EBP + -0x14]
005ad396  PUSH ECX
005ad397  MOV EDX,dword ptr [0x00793600]
005ad39d  MOV ECX,dword ptr [EDX + 0x4]
005ad3a0  CALL 0x005fc420
005ad3a5  JMP 0x005ad4cc
005ad3aa  MOV EAX,dword ptr [EBP + -0x10]
005ad3ad  PUSH EAX
005ad3ae  MOV ECX,dword ptr [EBP + 0x8]
005ad3b1  PUSH ECX
005ad3b2  MOV ECX,dword ptr [0x00793604]
005ad3b8  CALL 0x005b8090
005ad3bd  MOV EDX,dword ptr [EBP + 0x8]
005ad3c0  MOV EAX,[0x007935f8]
005ad3c5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005ad3c9  MOV EDX,dword ptr [EBP + 0x8]
005ad3cc  MOV EAX,[0x007935f8]
005ad3d1  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x18]
005ad3d5  MOV EAX,dword ptr [ECX]
005ad3d7  MOV ECX,EDX
005ad3d9  MOV EDX,dword ptr [EAX + 0x74]
005ad3dc  CALL EDX
005ad3de  PUSH 0x0
005ad3e0  PUSH 0x1
005ad3e2  MOV EAX,[0x00793600]
005ad3e7  MOV ECX,dword ptr [EAX + 0x4]
005ad3ea  MOV EDX,dword ptr [0x00793600]
005ad3f0  MOV EAX,dword ptr [EDX + 0x4]
005ad3f3  MOV EDX,dword ptr [ECX]
005ad3f5  MOV ECX,EAX
005ad3f7  MOV EAX,dword ptr [EDX + 0x8]
005ad3fa  CALL EAX
005ad3fc  JMP 0x005ad4cc
005ad401  MOV ECX,dword ptr [EBP + -0x10]
005ad404  PUSH ECX
005ad405  MOV EDX,dword ptr [EBP + 0x8]
005ad408  PUSH EDX
005ad409  MOV ECX,dword ptr [0x00793604]
005ad40f  CALL 0x005b3ee0
005ad414  MOV ECX,dword ptr [0x007935f8]
005ad41a  CALL 0x005a7ea0
005ad41f  PUSH 0x1
005ad421  MOV EAX,[0x00793600]
005ad426  MOV ECX,dword ptr [EAX + 0x4]
005ad429  MOV EDX,dword ptr [0x00793600]
005ad42f  MOV EAX,dword ptr [EDX + 0x4]
005ad432  MOV EDX,dword ptr [ECX]
005ad434  MOV ECX,EAX
005ad436  MOV EAX,dword ptr [EDX + 0x4]
005ad439  CALL EAX
005ad43b  PUSH 0x28
005ad43d  CALL 0x00686d82
005ad442  ADD ESP,0x4
005ad445  MOV dword ptr [EBP + -0x20],EAX
005ad448  MOV dword ptr [EBP + -0x4],0x1
005ad44f  CMP dword ptr [EBP + -0x20],0x0
005ad453  JZ 0x005ad46c
005ad455  MOV ECX,dword ptr [0x00793600]
005ad45b  MOV EDX,dword ptr [ECX + 0x4]
005ad45e  PUSH EDX
005ad45f  MOV ECX,dword ptr [EBP + -0x20]
005ad462  CALL 0x005ab7f0
005ad467  MOV dword ptr [EBP + -0x40],EAX
005ad46a  JMP 0x005ad473
005ad46c  MOV dword ptr [EBP + -0x40],0x0
005ad473  MOV EAX,dword ptr [EBP + -0x40]
005ad476  MOV dword ptr [EBP + -0x1c],EAX
005ad479  MOV dword ptr [EBP + -0x4],0xffffffff
005ad480  MOV ECX,dword ptr [EBP + -0x1c]
005ad483  PUSH ECX
005ad484  MOV EDX,dword ptr [0x00793600]
005ad48a  MOV ECX,dword ptr [EDX + 0x4]
005ad48d  CALL 0x005fc420
005ad492  JMP 0x005ad4cc
005ad494  MOV EAX,dword ptr [EBP + 0x8]
005ad497  PUSH EAX
005ad498  MOV ECX,dword ptr [0x00793604]
005ad49e  CALL 0x005b81f0
005ad4a3  MOV ECX,dword ptr [EBP + 0x8]
005ad4a6  PUSH ECX
005ad4a7  MOV ECX,dword ptr [EBP + -0x30]
005ad4aa  CALL 0x005aee50
005ad4af  JMP 0x005ad4cc
005ad4b1  XOR EDX,EDX
005ad4b3  JNZ 0x005ad4cc
005ad4b5  PUSH 0xbb
005ad4ba  PUSH 0x6cfe84
005ad4bf  PUSH 0x6b2f58
005ad4c4  CALL 0x005e9f20
005ad4c9  ADD ESP,0xc
005ad4cc  MOV AL,0x1
005ad4ce  MOV ECX,dword ptr [EBP + -0xc]
005ad4d1  MOV dword ptr FS:[0x0],ECX
005ad4d8  POP ECX
005ad4d9  MOV ESP,EBP
005ad4db  POP EBP
005ad4dc  RET 0xc
