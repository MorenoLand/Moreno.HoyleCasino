; FUN_0040f4a0  0040f4a0
0040f4a0  PUSH EBP
0040f4a1  MOV EBP,ESP
0040f4a3  SUB ESP,0xf0
0040f4a9  MOV dword ptr [EBP + 0xffffff14],ECX
0040f4af  MOV dword ptr [EBP + 0xffffff18],0x16b
0040f4b9  MOV dword ptr [EBP + 0xffffff1c],0x131
0040f4c3  MOV dword ptr [EBP + 0xffffff20],0x12c
0040f4cd  MOV dword ptr [EBP + 0xffffff24],0x110
0040f4d7  MOV dword ptr [EBP + 0xffffff28],0x17a
0040f4e1  MOV dword ptr [EBP + 0xffffff2c],0x110
0040f4eb  MOV dword ptr [EBP + 0xffffff30],0x15e
0040f4f5  MOV dword ptr [EBP + 0xffffff34],0xb8
0040f4ff  MOV dword ptr [EBP + 0xffffff38],0x12c
0040f509  MOV dword ptr [EBP + 0xffffff3c],0xb8
0040f513  MOV dword ptr [EBP + 0xffffff40],0x17a
0040f51d  MOV dword ptr [EBP + 0xffffff44],0xb8
0040f527  MOV dword ptr [EBP + 0xffffff48],0xcb
0040f531  MOV dword ptr [EBP + 0xffffff4c],0x132
0040f53b  MOV dword ptr [EBP + 0xffffff50],0x7a
0040f545  MOV dword ptr [EBP + 0xffffff54],0x110
0040f54f  MOV dword ptr [EBP + 0xffffff58],0xc8
0040f559  MOV dword ptr [EBP + 0xffffff5c],0x110
0040f563  MOV dword ptr [EBP + 0xffffff60],0xb1
0040f56d  MOV dword ptr [EBP + 0xffffff64],0xb8
0040f577  MOV dword ptr [EBP + 0xffffff68],0x83
0040f581  MOV dword ptr [EBP + 0xffffff6c],0xb8
0040f58b  MOV dword ptr [EBP + 0xffffff70],0xd1
0040f595  MOV dword ptr [EBP + 0xffffff74],0xb8
0040f59f  MOV dword ptr [EBP + 0xffffff78],0x1ef
0040f5a9  MOV dword ptr [EBP + 0xffffff7c],0xeb
0040f5b3  MOV dword ptr [EBP + -0x80],0x1c5
0040f5ba  MOV dword ptr [EBP + -0x7c],0xcb
0040f5c1  MOV dword ptr [EBP + -0x78],0x214
0040f5c8  MOV dword ptr [EBP + -0x74],0xcb
0040f5cf  MOV dword ptr [EBP + -0x70],0x1f3
0040f5d6  MOV dword ptr [EBP + -0x6c],0x78
0040f5dd  MOV dword ptr [EBP + -0x68],0x1c2
0040f5e4  MOV dword ptr [EBP + -0x64],0x78
0040f5eb  MOV dword ptr [EBP + -0x60],0x211
0040f5f2  MOV dword ptr [EBP + -0x5c],0x78
0040f5f9  MOV dword ptr [EBP + -0x58],0x46
0040f600  MOV dword ptr [EBP + -0x54],0xea
0040f607  MOV dword ptr [EBP + -0x50],0xffffffee
0040f60e  MOV dword ptr [EBP + -0x4c],0xcb
0040f615  MOV dword ptr [EBP + -0x48],0x3d
0040f61c  MOV dword ptr [EBP + -0x44],0xcb
0040f623  MOV dword ptr [EBP + -0x40],0x24
0040f62a  MOV dword ptr [EBP + -0x3c],0x78
0040f631  MOV dword ptr [EBP + -0x38],0xffffffee
0040f638  MOV dword ptr [EBP + -0x34],0x78
0040f63f  MOV dword ptr [EBP + -0x30],0x3d
0040f646  MOV dword ptr [EBP + -0x2c],0x78
0040f64d  MOV dword ptr [EBP + -0x24],0x143
0040f654  MOV dword ptr [EBP + -0x20],0x131
0040f65b  MOV dword ptr [EBP + -0x1c],0xf3
0040f662  MOV dword ptr [EBP + -0x18],0x132
0040f669  MOV dword ptr [EBP + -0x14],0x1c7
0040f670  MOV dword ptr [EBP + -0x10],0xeb
0040f677  MOV dword ptr [EBP + -0xc],0x6e
0040f67e  MOV dword ptr [EBP + -0x8],0xea
0040f685  MOV EAX,dword ptr [EBP + 0x8]
0040f688  PUSH EAX
0040f689  MOV ECX,dword ptr [EBP + 0xffffff14]
0040f68f  MOV ECX,dword ptr [ECX + 0x178]
0040f695  CALL 0x005cb820
0040f69a  MOV dword ptr [EBP + -0x4],EAX
0040f69d  MOV EDX,dword ptr [EBP + -0x4]
0040f6a0  MOV dword ptr [EBP + 0xffffff10],EDX
0040f6a6  MOV EAX,dword ptr [EBP + 0xffffff10]
0040f6ac  SUB EAX,0x1
0040f6af  MOV dword ptr [EBP + 0xffffff10],EAX
0040f6b5  CMP dword ptr [EBP + 0xffffff10],0x3
0040f6bc  JA 0x0040f771
0040f6c2  MOV ECX,dword ptr [EBP + 0xffffff10]
0040f6c8  JMP dword ptr [ECX*0x4 + 0x40f77c]
0040f6cf  MOV EDX,dword ptr [EBP + 0x8]
0040f6d2  IMUL EDX,EDX,0x30
0040f6d5  MOV EAX,dword ptr [EBP + EDX*0x1 + 0xffffff18]
0040f6dc  JMP 0x0040f773
0040f6e1  MOV EAX,dword ptr [EBP + 0x8]
0040f6e4  IMUL EAX,EAX,0x118
0040f6ea  MOV ECX,dword ptr [0x00790324]
0040f6f0  CMP byte ptr [ECX + EAX*0x1 + 0x11b],0x0
0040f6f8  SETNZ DL
0040f6fb  MOVZX EAX,DL
0040f6fe  TEST EAX,EAX
0040f700  JZ 0x0040f713
0040f702  CMP dword ptr [EBP + 0xc],0x1
0040f706  JNZ 0x0040f713
0040f708  MOV ECX,dword ptr [EBP + 0x8]
0040f70b  MOV EAX,dword ptr [EBP + ECX*0x8 + -0x24]
0040f70f  JMP 0x0040f773
0040f713  MOV EDX,dword ptr [EBP + 0x8]
0040f716  IMUL EDX,EDX,0x30
0040f719  LEA EAX,[EBP + EDX*0x1 + 0xffffff18]
0040f720  MOV ECX,dword ptr [EBP + 0xc]
0040f723  MOV EAX,dword ptr [EAX + ECX*0x8 + 0x8]
0040f727  JMP 0x0040f773
0040f729  MOV EDX,dword ptr [EBP + 0x8]
0040f72c  IMUL EDX,EDX,0x30
0040f72f  LEA EAX,[EBP + EDX*0x1 + 0xffffff18]
0040f736  MOV ECX,dword ptr [EBP + 0xc]
0040f739  MOV EAX,dword ptr [EAX + ECX*0x8 + 0x8]
0040f73d  JMP 0x0040f773
0040f73f  CMP dword ptr [EBP + 0xc],0x2
0040f743  JGE 0x0040f75b
0040f745  MOV EDX,dword ptr [EBP + 0x8]
0040f748  IMUL EDX,EDX,0x30
0040f74b  LEA EAX,[EBP + EDX*0x1 + 0xffffff18]
0040f752  MOV ECX,dword ptr [EBP + 0xc]
0040f755  MOV EAX,dword ptr [EAX + ECX*0x8 + 0x8]
0040f759  JMP 0x0040f773
0040f75b  MOV EDX,dword ptr [EBP + 0x8]
0040f75e  IMUL EDX,EDX,0x30
0040f761  LEA EAX,[EBP + EDX*0x1 + 0xffffff18]
0040f768  MOV ECX,dword ptr [EBP + 0xc]
0040f76b  MOV EAX,dword ptr [EAX + ECX*0x8 + 0x10]
0040f76f  JMP 0x0040f773
0040f771  XOR EAX,EAX
0040f773  MOV ESP,EBP
0040f775  POP EBP
0040f776  RET 0x8
