; FUN_005cdcd0  005cdcd0
005cdcd0  PUSH EBP
005cdcd1  MOV EBP,ESP
005cdcd3  PUSH ECX
005cdcd4  MOV dword ptr [EBP + -0x4],ECX
005cdcd7  CMP dword ptr [EBP + 0x8],0x0
005cdcdb  JNZ 0x005cdd04
005cdcdd  PUSH 0x1
005cdcdf  MOV ECX,dword ptr [EBP + -0x4]
005cdce2  CALL 0x005fb350
005cdce7  MOV ECX,EAX
005cdce9  CALL 0x00600230
005cdcee  PUSH EAX
005cdcef  MOV EAX,[0x007947e4]
005cdcf4  MOV EDX,dword ptr [EAX]
005cdcf6  MOV ECX,dword ptr [0x007947e4]
005cdcfc  MOV EAX,dword ptr [EDX + 0x274]
005cdd02  CALL EAX
005cdd04  MOV ESP,EBP
005cdd06  POP EBP
005cdd07  RET 0x4
