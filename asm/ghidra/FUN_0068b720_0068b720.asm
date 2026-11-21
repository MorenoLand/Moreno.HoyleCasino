; FUN_0068b720  0068b720
0068b720  PUSH EBP
0068b721  MOV EBP,ESP
0068b723  PUSH -0x1
0068b725  PUSH 0x6adff2
0068b72a  MOV EAX,FS:[0x0]
0068b730  PUSH EAX
0068b731  SUB ESP,0xe8
0068b737  MOV EAX,[0x00781870]
0068b73c  XOR EAX,EBP
0068b73e  PUSH EAX
0068b73f  LEA EAX,[EBP + -0xc]
0068b742  MOV FS:[0x0],EAX
0068b748  MOV dword ptr [EBP + 0xffffff14],ECX
0068b74e  MOV EAX,dword ptr [EBP + 0x8]
0068b751  PUSH EAX
0068b752  MOV ECX,dword ptr [EBP + 0xffffff14]
0068b758  CALL 0x0068c3a0
0068b75d  MOV dword ptr [EBP + -0x5c],EAX
0068b760  MOV dword ptr [EBP + -0x14],0x0
0068b767  MOV ECX,dword ptr [EBP + -0x5c]
0068b76a  MOV dword ptr [EBP + -0x10],ECX
0068b76d  CMP dword ptr [EBP + 0xffffff14],0x0
0068b774  JNZ 0x0068b77c
0068b776  CALL dword ptr [0x006b2274]
0068b77c  MOV EDX,dword ptr [EBP + 0xffffff14]
0068b782  MOV dword ptr [EBP + -0x14],EDX
0068b785  MOV EAX,dword ptr [EBP + 0xffffff14]
0068b78b  MOV ECX,dword ptr [EAX + 0x4]
0068b78e  MOV dword ptr [EBP + -0x60],ECX
0068b791  MOV dword ptr [EBP + -0x1c],0x0
0068b798  MOV EDX,dword ptr [EBP + -0x60]
0068b79b  MOV dword ptr [EBP + -0x18],EDX
0068b79e  CMP dword ptr [EBP + 0xffffff14],0x0
0068b7a5  JNZ 0x0068b7ad
0068b7a7  CALL dword ptr [0x006b2274]
0068b7ad  MOV EAX,dword ptr [EBP + 0xffffff14]
0068b7b3  MOV dword ptr [EBP + -0x1c],EAX
0068b7b6  CMP dword ptr [EBP + -0x14],0x0
0068b7ba  JZ 0x0068b7c4
0068b7bc  MOV ECX,dword ptr [EBP + -0x14]
0068b7bf  CMP ECX,dword ptr [EBP + -0x1c]
0068b7c2  JZ 0x0068b7ca
0068b7c4  CALL dword ptr [0x006b2274]
0068b7ca  MOV EDX,dword ptr [EBP + -0x10]
0068b7cd  XOR EAX,EAX
0068b7cf  CMP EDX,dword ptr [EBP + -0x18]
0068b7d2  SETZ AL
0068b7d5  MOVZX ECX,AL
0068b7d8  TEST ECX,ECX
0068b7da  JNZ 0x0068b801
0068b7dc  MOV EDX,dword ptr [EBP + -0x10]
0068b7df  MOV dword ptr [EBP + -0x64],EDX
0068b7e2  MOV EAX,dword ptr [EBP + -0x64]
0068b7e5  ADD EAX,0xc
0068b7e8  PUSH EAX
0068b7e9  MOV ECX,dword ptr [EBP + 0x8]
0068b7ec  PUSH ECX
0068b7ed  CALL dword ptr [0x006b20f0]
0068b7f3  ADD ESP,0x8
0068b7f6  MOVZX EDX,AL
0068b7f9  TEST EDX,EDX
0068b7fb  JZ 0x0068b8b6
0068b801  LEA ECX,[EBP + -0x50]
0068b804  CALL 0x0068c4d0
0068b809  MOV dword ptr [EBP + 0xffffff10],EAX
0068b80f  MOV EAX,dword ptr [EBP + 0xffffff10]
0068b815  MOV dword ptr [EBP + 0xffffff7c],EAX
0068b81b  MOV dword ptr [EBP + -0x4],0x0
0068b822  MOV ECX,dword ptr [EBP + 0x8]
0068b825  PUSH ECX
0068b826  LEA ECX,[EBP + -0x44]
0068b829  CALL dword ptr [0x006b20f8]
0068b82f  MOV byte ptr [EBP + -0x4],0x1
0068b833  LEA EDX,[EBP + -0x28]
0068b836  MOV dword ptr [EBP + -0x80],EDX
0068b839  MOV EAX,dword ptr [EBP + 0xffffff7c]
0068b83f  PUSH EAX
0068b840  MOV ECX,dword ptr [EBP + -0x80]
0068b843  CALL 0x0068d530
0068b848  MOV byte ptr [EBP + -0x4],0x0
0068b84c  LEA ECX,[EBP + -0x44]
0068b84f  MOV dword ptr [EBP + 0xffffff0c],ECX
0068b855  MOV byte ptr [EBP + -0x4],0x2
0068b859  MOV EDX,dword ptr [EBP + 0xffffff0c]
0068b85f  PUSH EDX
0068b860  MOV EAX,dword ptr [EBP + -0x10]
0068b863  PUSH EAX
0068b864  MOV ECX,dword ptr [EBP + -0x14]
0068b867  PUSH ECX
0068b868  LEA EDX,[EBP + -0x58]
0068b86b  PUSH EDX
0068b86c  MOV ECX,dword ptr [EBP + 0xffffff14]
0068b872  CALL 0x0068bc00
0068b877  MOV ECX,dword ptr [EAX]
0068b879  MOV EDX,dword ptr [EAX + 0x4]
0068b87c  MOV dword ptr [EBP + -0x14],ECX
0068b87f  MOV dword ptr [EBP + -0x10],EDX
0068b882  MOV byte ptr [EBP + -0x4],0x3
0068b886  LEA EAX,[EBP + -0x28]
0068b889  MOV dword ptr [EBP + 0xffffff78],EAX
0068b88f  MOV ECX,dword ptr [EBP + 0xffffff78]
0068b895  CALL 0x0068dc60
0068b89a  MOV byte ptr [EBP + -0x4],0x0
0068b89e  LEA ECX,[EBP + -0x44]
0068b8a1  CALL dword ptr [0x006b20f4]
0068b8a7  MOV dword ptr [EBP + -0x4],0xffffffff
0068b8ae  LEA ECX,[EBP + -0x50]
0068b8b1  CALL 0x0068dc60
0068b8b6  CMP dword ptr [EBP + -0x14],0x0
0068b8ba  JNZ 0x0068b8c2
0068b8bc  CALL dword ptr [0x006b2274]
0068b8c2  MOV ECX,dword ptr [EBP + -0x14]
0068b8c5  MOV EDX,dword ptr [EBP + -0x10]
0068b8c8  CMP EDX,dword ptr [ECX + 0x4]
0068b8cb  JNZ 0x0068b8d3
0068b8cd  CALL dword ptr [0x006b2274]
0068b8d3  MOV EAX,dword ptr [EBP + -0x10]
0068b8d6  ADD EAX,0x28
0068b8d9  MOV ECX,dword ptr [EBP + -0xc]
0068b8dc  MOV dword ptr FS:[0x0],ECX
0068b8e3  POP ECX
0068b8e4  MOV ESP,EBP
0068b8e6  POP EBP
0068b8e7  RET 0x4
