; FUN_005caea0  005caea0
005caea0  PUSH EBP
005caea1  MOV EBP,ESP
005caea3  SUB ESP,0x38
005caea6  MOV dword ptr [EBP + -0x34],ECX
005caea9  MOV EAX,[0x007947e4]
005caeae  MOV EDX,dword ptr [EAX]
005caeb0  MOV ECX,dword ptr [0x007947e4]
005caeb6  MOV EAX,dword ptr [EDX + 0x25c]
005caebc  CALL EAX
005caebe  MOV dword ptr [EBP + -0x4],EAX
005caec1  LEA ECX,[EBP + -0x10]
005caec4  PUSH ECX
005caec5  MOV ECX,dword ptr [EBP + -0x4]
005caec8  CALL 0x005d5de0
005caecd  LEA EDX,[EBP + -0x20]
005caed0  PUSH EDX
005caed1  MOV ECX,dword ptr [EBP + -0x4]
005caed4  CALL 0x005d5ac0
005caed9  MOV EAX,[0x007947e4]
005caede  MOV EDX,dword ptr [EAX]
005caee0  MOV ECX,dword ptr [0x007947e4]
005caee6  MOV EAX,dword ptr [EDX + 0x2b4]
005caeec  CALL EAX
005caeee  MOV dword ptr [EBP + -0x8],EAX
005caef1  MOV ECX,dword ptr [EBP + -0x10]
005caef4  CMP ECX,dword ptr [EBP + -0x8]
005caef7  JNZ 0x005caf0f
005caef9  MOV EDX,dword ptr [EBP + 0x8]
005caefc  CMP dword ptr [EDX],0x0
005caeff  JL 0x005caf0f
005caf01  MOV EAX,dword ptr [EBP + 0x8]
005caf04  CMP dword ptr [EAX + 0x4],0x0
005caf08  JL 0x005caf0f
005caf0a  JMP 0x005cb031
005caf0f  MOV ECX,dword ptr [EBP + -0x10]
005caf12  CMP ECX,dword ptr [EBP + -0x20]
005caf15  JNZ 0x005caf35
005caf17  MOV EDX,dword ptr [EBP + -0xc]
005caf1a  CMP EDX,dword ptr [EBP + -0x1c]
005caf1d  JNZ 0x005caf35
005caf1f  MOV EAX,dword ptr [EBP + 0x8]
005caf22  CMP dword ptr [EAX],0x0
005caf25  JL 0x005caf35
005caf27  MOV ECX,dword ptr [EBP + 0x8]
005caf2a  CMP dword ptr [ECX + 0x4],0x0
005caf2e  JL 0x005caf35
005caf30  JMP 0x005cb031
005caf35  MOV EDX,dword ptr [EBP + 0x8]
005caf38  MOV EAX,dword ptr [EDX + 0x4]
005caf3b  PUSH EAX
005caf3c  MOV ECX,dword ptr [EDX]
005caf3e  PUSH ECX
005caf3f  LEA EDX,[EBP + -0x28]
005caf42  PUSH EDX
005caf43  LEA ECX,[EBP + -0x10]
005caf46  CALL 0x0064c5c0
005caf4b  MOV ECX,dword ptr [EAX]
005caf4d  MOV EDX,dword ptr [EAX + 0x4]
005caf50  MOV dword ptr [EBP + -0x18],ECX
005caf53  MOV dword ptr [EBP + -0x14],EDX
005caf56  MOV EAX,dword ptr [EBP + -0x18]
005caf59  CMP EAX,dword ptr [EBP + -0x8]
005caf5c  JLE 0x005caf64
005caf5e  MOV ECX,dword ptr [EBP + -0x8]
005caf61  MOV dword ptr [EBP + -0x18],ECX
005caf64  MOV EDX,dword ptr [EBP + -0x18]
005caf67  CMP EDX,dword ptr [EBP + -0x8]
005caf6a  JNZ 0x005caf79
005caf6c  CMP dword ptr [EBP + -0x14],0x0
005caf70  JLE 0x005caf79
005caf72  MOV dword ptr [EBP + -0x14],0x0
005caf79  MOV EAX,dword ptr [EBP + -0x18]
005caf7c  CMP EAX,dword ptr [EBP + -0x20]
005caf7f  JG 0x005caf91
005caf81  MOV ECX,dword ptr [EBP + -0x18]
005caf84  CMP ECX,dword ptr [EBP + -0x20]
005caf87  JNZ 0x005caf9f
005caf89  MOV EDX,dword ptr [EBP + -0x14]
005caf8c  CMP EDX,dword ptr [EBP + -0x1c]
005caf8f  JLE 0x005caf9f
005caf91  MOV EAX,dword ptr [EBP + -0x20]
005caf94  MOV dword ptr [EBP + -0x18],EAX
005caf97  MOV ECX,dword ptr [EBP + -0x1c]
005caf9a  MOV dword ptr [EBP + -0x14],ECX
005caf9d  JMP 0x005cafc9
005caf9f  CMP dword ptr [EBP + -0x18],0x0
005cafa3  JL 0x005cafab
005cafa5  CMP dword ptr [EBP + -0x14],0x0
005cafa9  JGE 0x005cafc9
005cafab  PUSH 0x0
005cafad  PUSH 0x0
005cafaf  CALL 0x0064c8a0
005cafb4  ADD ESP,0x8
005cafb7  MOV dword ptr [EBP + -0x30],EAX
005cafba  MOV dword ptr [EBP + -0x2c],EDX
005cafbd  MOV EDX,dword ptr [EBP + -0x30]
005cafc0  MOV dword ptr [EBP + -0x18],EDX
005cafc3  MOV EAX,dword ptr [EBP + -0x2c]
005cafc6  MOV dword ptr [EBP + -0x14],EAX
005cafc9  MOV ECX,dword ptr [EBP + -0x14]
005cafcc  PUSH ECX
005cafcd  MOV EDX,dword ptr [EBP + -0x18]
005cafd0  PUSH EDX
005cafd1  MOV ECX,dword ptr [EBP + -0x4]
005cafd4  CALL 0x005d5e10
005cafd9  MOV EAX,[0x007947e4]
005cafde  MOV ECX,dword ptr [EAX + 0x68]
005cafe1  CALL 0x005ca8b0
005cafe6  MOV ECX,dword ptr [0x0162ee84]
005cafec  MOV EDX,dword ptr [ECX]
005cafee  MOV ECX,dword ptr [0x0162ee84]
005caff4  MOV EAX,dword ptr [EDX + 0xe8]
005caffa  CALL EAX
005caffc  MOV dword ptr [EBP + -0x38],EAX
005cafff  MOV ECX,dword ptr [EBP + -0x38]
005cb002  MOV EDX,dword ptr [ECX]
005cb004  MOV ECX,dword ptr [EBP + -0x38]
005cb007  MOV EAX,dword ptr [EDX + 0x28]
005cb00a  CALL EAX
005cb00c  CMP EAX,0x1
005cb00f  JNZ 0x005cb031
005cb011  PUSH 0x0
005cb013  MOV ECX,dword ptr [EBP + -0x4]
005cb016  MOV EDX,dword ptr [ECX + 0x4c0]
005cb01c  PUSH EDX
005cb01d  MOV EAX,dword ptr [ECX + 0x4bc]
005cb023  PUSH EAX
005cb024  MOV ECX,dword ptr [EBP + -0x4]
005cb027  MOV EDX,dword ptr [ECX]
005cb029  MOV ECX,dword ptr [EBP + -0x4]
005cb02c  MOV EAX,dword ptr [EDX + 0xc]
005cb02f  CALL EAX
005cb031  MOV ESP,EBP
005cb033  POP EBP
005cb034  RET 0x4
