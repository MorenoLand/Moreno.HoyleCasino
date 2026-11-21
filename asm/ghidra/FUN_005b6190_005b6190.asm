; FUN_005b6190  005b6190
005b6190  PUSH EBP
005b6191  MOV EBP,ESP
005b6193  PUSH -0x1
005b6195  PUSH 0x6a7e87
005b619a  MOV EAX,FS:[0x0]
005b61a0  PUSH EAX
005b61a1  SUB ESP,0x70
005b61a4  MOV EAX,[0x00781870]
005b61a9  XOR EAX,EBP
005b61ab  PUSH EAX
005b61ac  LEA EAX,[EBP + -0xc]
005b61af  MOV FS:[0x0],EAX
005b61b5  MOV dword ptr [EBP + -0x6c],ECX
005b61b8  MOV dword ptr [EBP + -0x38],0x5
005b61bf  MOV dword ptr [EBP + -0x34],0x5
005b61c6  MOV dword ptr [EBP + -0x30],0x6
005b61cd  MOV dword ptr [EBP + -0x2c],0x5
005b61d4  MOV dword ptr [EBP + -0x28],0x2
005b61db  MOV dword ptr [EBP + -0x24],0x5
005b61e2  MOV dword ptr [EBP + -0x20],0x3
005b61e9  MOV dword ptr [EBP + -0x1c],0x1
005b61f0  MOV dword ptr [EBP + -0x18],0x2
005b61f7  MOV dword ptr [EBP + -0x14],0x4
005b61fe  MOV dword ptr [EBP + -0x10],0x6
005b6205  MOV ECX,dword ptr [0x00793600]
005b620b  CALL 0x005da830
005b6210  MOVZX EAX,AL
005b6213  TEST EAX,EAX
005b6215  JZ 0x005b6228
005b6217  MOV ECX,dword ptr [0x007947e0]
005b621d  MOV EDX,dword ptr [ECX + 0x4ef4]
005b6223  MOV dword ptr [EBP + -0x70],EDX
005b6226  JMP 0x005b623d
005b6228  PUSH -0x1
005b622a  MOV ECX,dword ptr [EBP + -0x6c]
005b622d  CALL 0x005b5fb0
005b6232  MOVSX EAX,byte ptr [EAX + 0x9]
005b6236  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x1c]
005b623a  MOV dword ptr [EBP + -0x70],ECX
005b623d  MOV EDX,dword ptr [EBP + -0x70]
005b6240  MOV dword ptr [EBP + -0x3c],EDX
005b6243  MOV EAX,dword ptr [EBP + -0x6c]
005b6246  CMP dword ptr [EAX + 0x57c],0x0
005b624d  JNZ 0x005b6299
005b624f  PUSH 0x810
005b6254  CALL 0x00686d82
005b6259  ADD ESP,0x4
005b625c  MOV dword ptr [EBP + -0x48],EAX
005b625f  MOV dword ptr [EBP + -0x4],0x0
005b6266  CMP dword ptr [EBP + -0x48],0x0
005b626a  JZ 0x005b6279
005b626c  MOV ECX,dword ptr [EBP + -0x48]
005b626f  CALL 0x00642e10
005b6274  MOV dword ptr [EBP + -0x74],EAX
005b6277  JMP 0x005b6280
005b6279  MOV dword ptr [EBP + -0x74],0x0
005b6280  MOV ECX,dword ptr [EBP + -0x74]
005b6283  MOV dword ptr [EBP + -0x44],ECX
005b6286  MOV dword ptr [EBP + -0x4],0xffffffff
005b628d  MOV EDX,dword ptr [EBP + -0x6c]
005b6290  MOV EAX,dword ptr [EBP + -0x44]
005b6293  MOV dword ptr [EDX + 0x57c],EAX
005b6299  MOV ECX,dword ptr [EBP + -0x3c]
005b629c  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x38]
005b62a0  PUSH EDX
005b62a1  MOV EAX,dword ptr [EBP + -0x6c]
005b62a4  MOV ECX,dword ptr [EAX + 0x57c]
005b62aa  CALL 0x00642e70
005b62af  MOV ECX,dword ptr [EBP + -0x6c]
005b62b2  CALL 0x005b7ef0
005b62b7  MOV dword ptr [EBP + -0x40],0x0
005b62be  JMP 0x005b62c9
005b62c0  MOV ECX,dword ptr [EBP + -0x40]
005b62c3  ADD ECX,0x1
005b62c6  MOV dword ptr [EBP + -0x40],ECX
005b62c9  CMP dword ptr [EBP + -0x40],0x4
005b62cd  JGE 0x005b63f8
005b62d3  PUSH 0xf0
005b62d8  CALL 0x00686d82
005b62dd  ADD ESP,0x4
005b62e0  MOV dword ptr [EBP + -0x50],EAX
005b62e3  MOV dword ptr [EBP + -0x4],0x1
005b62ea  CMP dword ptr [EBP + -0x50],0x0
005b62ee  JZ 0x005b62fd
005b62f0  MOV ECX,dword ptr [EBP + -0x50]
005b62f3  CALL 0x005b85a0
005b62f8  MOV dword ptr [EBP + -0x78],EAX
005b62fb  JMP 0x005b6304
005b62fd  MOV dword ptr [EBP + -0x78],0x0
005b6304  MOV EDX,dword ptr [EBP + -0x78]
005b6307  MOV dword ptr [EBP + -0x4c],EDX
005b630a  MOV dword ptr [EBP + -0x4],0xffffffff
005b6311  MOV EAX,dword ptr [EBP + -0x40]
005b6314  MOV ECX,dword ptr [EBP + -0x6c]
005b6317  MOV EDX,dword ptr [EBP + -0x4c]
005b631a  MOV dword ptr [ECX + EAX*0x4 + 0x580],EDX
005b6321  MOV EAX,dword ptr [EBP + -0x40]
005b6324  PUSH EAX
005b6325  MOV ECX,dword ptr [EBP + -0x40]
005b6328  MOV EDX,dword ptr [EBP + -0x6c]
005b632b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x580]
005b6332  CALL 0x005f53e0
005b6337  PUSH 0xf0
005b633c  CALL 0x00686d82
005b6341  ADD ESP,0x4
005b6344  MOV dword ptr [EBP + -0x58],EAX
005b6347  MOV dword ptr [EBP + -0x4],0x2
005b634e  CMP dword ptr [EBP + -0x58],0x0
005b6352  JZ 0x005b6361
005b6354  MOV ECX,dword ptr [EBP + -0x58]
005b6357  CALL 0x005b85a0
005b635c  MOV dword ptr [EBP + -0x7c],EAX
005b635f  JMP 0x005b6368
005b6361  MOV dword ptr [EBP + -0x7c],0x0
005b6368  MOV EAX,dword ptr [EBP + -0x7c]
005b636b  MOV dword ptr [EBP + -0x54],EAX
005b636e  MOV dword ptr [EBP + -0x4],0xffffffff
005b6375  MOV ECX,dword ptr [EBP + -0x40]
005b6378  MOV EDX,dword ptr [EBP + -0x6c]
005b637b  MOV EAX,dword ptr [EBP + -0x54]
005b637e  MOV dword ptr [EDX + ECX*0x4 + 0x634],EAX
005b6385  MOV ECX,dword ptr [EBP + -0x40]
005b6388  PUSH ECX
005b6389  MOV EDX,dword ptr [EBP + -0x40]
005b638c  MOV EAX,dword ptr [EBP + -0x6c]
005b638f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x634]
005b6396  CALL 0x005f53e0
005b639b  PUSH 0x0
005b639d  PUSH 0x0
005b639f  CALL 0x0064c8a0
005b63a4  ADD ESP,0x8
005b63a7  MOV dword ptr [EBP + -0x60],EAX
005b63aa  MOV dword ptr [EBP + -0x5c],EDX
005b63ad  MOV ECX,dword ptr [EBP + -0x40]
005b63b0  MOV EDX,dword ptr [EBP + -0x6c]
005b63b3  MOV EAX,dword ptr [EBP + -0x60]
005b63b6  MOV dword ptr [EDX + ECX*0x8 + 0x590],EAX
005b63bd  MOV EAX,dword ptr [EBP + -0x5c]
005b63c0  MOV dword ptr [EDX + ECX*0x8 + 0x594],EAX
005b63c7  PUSH 0x0
005b63c9  PUSH 0x0
005b63cb  CALL 0x0064c8a0
005b63d0  ADD ESP,0x8
005b63d3  MOV dword ptr [EBP + -0x68],EAX
005b63d6  MOV dword ptr [EBP + -0x64],EDX
005b63d9  MOV ECX,dword ptr [EBP + -0x40]
005b63dc  MOV EDX,dword ptr [EBP + -0x6c]
005b63df  MOV EAX,dword ptr [EBP + -0x68]
005b63e2  MOV dword ptr [EDX + ECX*0x8 + 0x644],EAX
005b63e9  MOV EAX,dword ptr [EBP + -0x64]
005b63ec  MOV dword ptr [EDX + ECX*0x8 + 0x648],EAX
005b63f3  JMP 0x005b62c0
005b63f8  MOV ECX,dword ptr [EBP + -0x6c]
005b63fb  MOV byte ptr [ECX + 0x5c0],0x0
005b6402  MOV EDX,dword ptr [EBP + -0x6c]
005b6405  MOV byte ptr [EDX + 0x5b4],0x0
005b640c  MOV EAX,dword ptr [EBP + -0x6c]
005b640f  MOV dword ptr [EAX + 0x5b0],0x0
005b6419  MOV ECX,dword ptr [EBP + -0x6c]
005b641c  MOV dword ptr [ECX + 0x5c4],0x0
005b6426  MOV EDX,dword ptr [EBP + -0x6c]
005b6429  MOV dword ptr [EDX + 0x5cc],0x0
005b6433  MOV EAX,dword ptr [EBP + -0x6c]
005b6436  MOV dword ptr [EAX + 0x5c8],0x0
005b6440  MOV ECX,dword ptr [EBP + -0x6c]
005b6443  MOV dword ptr [ECX + 0x5d0],0x0
005b644d  MOV ECX,dword ptr [EBP + -0x6c]
005b6450  CALL 0x005b7d30
005b6455  MOVZX EDX,AL
005b6458  NEG EDX
005b645a  SBB EDX,EDX
005b645c  ADD EDX,0x1
005b645f  MOV EAX,dword ptr [EBP + -0x6c]
005b6462  MOV byte ptr [EAX + 0x678],DL
005b6468  MOV ECX,dword ptr [EBP + -0x6c]
005b646b  CALL 0x005b6a60
005b6470  MOV ECX,dword ptr [EBP + -0xc]
005b6473  MOV dword ptr FS:[0x0],ECX
005b647a  POP ECX
005b647b  MOV ESP,EBP
005b647d  POP EBP
005b647e  RET
