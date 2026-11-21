; FUN_005ca8b0  005ca8b0
005ca8b0  PUSH EBP
005ca8b1  MOV EBP,ESP
005ca8b3  SUB ESP,0x8c
005ca8b9  MOV EAX,[0x00781870]
005ca8be  XOR EAX,EBP
005ca8c0  MOV dword ptr [EBP + -0x8],EAX
005ca8c3  MOV dword ptr [EBP + 0xffffff78],ECX
005ca8c9  MOV EAX,[0x007947e4]
005ca8ce  MOV EDX,dword ptr [EAX]
005ca8d0  MOV ECX,dword ptr [0x007947e4]
005ca8d6  MOV EAX,dword ptr [EDX + 0x25c]
005ca8dc  CALL EAX
005ca8de  MOV dword ptr [EBP + -0x4],EAX
005ca8e1  MOV ECX,dword ptr [EBP + -0x4]
005ca8e4  CALL 0x0063aac0
005ca8e9  MOV ECX,dword ptr [EAX]
005ca8eb  MOV dword ptr [EBP + -0x80],ECX
005ca8ee  CMP dword ptr [EBP + -0x80],0x2
005ca8f2  JZ 0x005ca919
005ca8f4  MOV ECX,dword ptr [EBP + -0x4]
005ca8f7  CALL 0x0063aac0
005ca8fc  MOV EDX,dword ptr [EAX]
005ca8fe  MOV dword ptr [EBP + 0xffffff7c],EDX
005ca904  CMP dword ptr [EBP + 0xffffff7c],0x3
005ca90b  JZ 0x005ca919
005ca90d  MOV dword ptr [EBP + 0xffffff74],0x0
005ca917  JMP 0x005ca923
005ca919  MOV dword ptr [EBP + 0xffffff74],0x1
005ca923  MOVZX EAX,byte ptr [EBP + 0xffffff74]
005ca92a  TEST EAX,EAX
005ca92c  JNZ 0x005ca933
005ca92e  JMP 0x005ca9e2
005ca933  LEA ECX,[EBP + -0x7c]
005ca936  PUSH ECX
005ca937  MOV ECX,dword ptr [EBP + -0x4]
005ca93a  CALL 0x005d5de0
005ca93f  MOV EDX,dword ptr [EBP + 0xffffff78]
005ca945  CMP dword ptr [EDX + 0x24],0x0
005ca949  JZ 0x005ca9e2
005ca94f  PUSH 0x1
005ca951  PUSH 0x1
005ca953  PUSH 0x1
005ca955  LEA EAX,[EBP + -0x70]
005ca958  PUSH EAX
005ca959  MOV ECX,dword ptr [EBP + -0x78]
005ca95c  PUSH ECX
005ca95d  MOV EDX,dword ptr [EBP + -0x7c]
005ca960  PUSH EDX
005ca961  CALL 0x0064c8d0
005ca966  ADD ESP,0x18
005ca969  LEA EAX,[EBP + -0x70]
005ca96c  PUSH EAX
005ca96d  CALL 0x00686ecc
005ca972  ADD ESP,0x4
005ca975  SUB EAX,0x2
005ca978  MOV dword ptr [EBP + -0x74],EAX
005ca97b  LEA ECX,[EBP + -0x70]
005ca97e  PUSH ECX
005ca97f  MOV EDX,dword ptr [EBP + 0xffffff78]
005ca985  MOV EAX,dword ptr [EDX + 0x24]
005ca988  MOV ECX,dword ptr [EBP + 0xffffff78]
005ca98e  MOV ECX,dword ptr [ECX + 0x24]
005ca991  MOV EDX,dword ptr [EAX]
005ca993  MOV EAX,dword ptr [EDX + 0xb4]
005ca999  CALL EAX
005ca99b  PUSH 0x1cd
005ca9a0  MOV ECX,dword ptr [EBP + -0x74]
005ca9a3  SHL ECX,0x3
005ca9a6  MOV EDX,0x267
005ca9ab  SUB EDX,ECX
005ca9ad  PUSH EDX
005ca9ae  MOV EAX,dword ptr [EBP + 0xffffff78]
005ca9b4  MOV ECX,dword ptr [EAX + 0x24]
005ca9b7  MOV EDX,dword ptr [EBP + 0xffffff78]
005ca9bd  MOV EAX,dword ptr [EDX + 0x24]
005ca9c0  MOV EDX,dword ptr [ECX]
005ca9c2  MOV ECX,EAX
005ca9c4  MOV EAX,dword ptr [EDX + 0x44]
005ca9c7  CALL EAX
005ca9c9  MOV ECX,dword ptr [EBP + 0xffffff78]
005ca9cf  MOV EDX,dword ptr [ECX + 0x24]
005ca9d2  MOV EAX,dword ptr [EBP + 0xffffff78]
005ca9d8  MOV ECX,dword ptr [EAX + 0x24]
005ca9db  MOV EDX,dword ptr [EDX]
005ca9dd  MOV EAX,dword ptr [EDX + 0x74]
005ca9e0  CALL EAX
005ca9e2  MOV ECX,dword ptr [EBP + -0x8]
005ca9e5  XOR ECX,EBP
005ca9e7  CALL 0x00686d72
005ca9ec  MOV ESP,EBP
005ca9ee  POP EBP
005ca9ef  RET
