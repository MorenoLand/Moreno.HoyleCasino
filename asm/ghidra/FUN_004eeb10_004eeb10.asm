; FUN_004eeb10  004eeb10
004eeb10  PUSH EBP
004eeb11  MOV EBP,ESP
004eeb13  PUSH ECX
004eeb14  PUSH ESI
004eeb15  MOV dword ptr [EBP + -0x4],ECX
004eeb18  MOVSX EAX,word ptr [EBP + 0x8]
004eeb1c  TEST EAX,EAX
004eeb1e  JGE 0x004eeb37
004eeb20  PUSH 0x2c32
004eeb25  PUSH 0x6bf384
004eeb2a  PUSH 0x6bf888
004eeb2f  CALL 0x005e9f20
004eeb34  ADD ESP,0xc
004eeb37  MOVSX ESI,word ptr [EBP + 0x8]
004eeb3b  MOV ECX,dword ptr [0x00791364]
004eeb41  CALL 0x0047f950
004eeb46  CMP ESI,EAX
004eeb48  JL 0x004eeb61
004eeb4a  PUSH 0x2c33
004eeb4f  PUSH 0x6bf384
004eeb54  PUSH 0x6bf858
004eeb59  CALL 0x005e9f20
004eeb5e  ADD ESP,0xc
004eeb61  MOVSX EAX,word ptr [EBP + 0xc]
004eeb65  CMP EAX,0x2
004eeb68  JGE 0x004eeb81
004eeb6a  PUSH 0x2c34
004eeb6f  PUSH 0x6bf384
004eeb74  PUSH 0x6bf778
004eeb79  CALL 0x005e9f20
004eeb7e  ADD ESP,0xc
004eeb81  MOVSX ESI,word ptr [EBP + 0xc]
004eeb85  MOV ECX,dword ptr [0x00791364]
004eeb8b  CALL 0x0047f950
004eeb90  CMP ESI,EAX
004eeb92  JLE 0x004eebab
004eeb94  PUSH 0x2c35
004eeb99  PUSH 0x6bf384
004eeb9e  PUSH 0x6bf740
004eeba3  CALL 0x005e9f20
004eeba8  ADD ESP,0xc
004eebab  MOV EAX,dword ptr [EBP + -0x4]
004eebae  MOV ECX,dword ptr [EAX + 0x428]
004eebb4  MOVSX EDX,word ptr [EBP + 0x8]
004eebb8  IMUL EDX,EDX,0xe
004eebbb  LEA EAX,[ECX + EDX*0x1 + 0xbd0]
004eebc2  MOVSX ECX,word ptr [EBP + 0xc]
004eebc6  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004eebcb  ADD DX,0x1
004eebcf  MOVSX EAX,word ptr [EBP + 0xc]
004eebd3  MOVSX ECX,word ptr [EBP + 0x8]
004eebd7  IMUL ECX,ECX,0xe
004eebda  MOV ESI,dword ptr [EBP + -0x4]
004eebdd  MOV ESI,dword ptr [ESI + 0x428]
004eebe3  LEA ECX,[ESI + ECX*0x1 + 0xbd0]
004eebea  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004eebef  MOV EDX,dword ptr [EBP + -0x4]
004eebf2  MOV EAX,dword ptr [EDX + 0x428]
004eebf8  MOVSX ECX,word ptr [EBP + 0x8]
004eebfc  IMUL ECX,ECX,0xe
004eebff  LEA EDX,[EAX + ECX*0x1 + 0xbd0]
004eec06  MOVSX EAX,word ptr [EBP + 0xc]
004eec0a  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004eec0f  CMP ECX,0x3000
004eec15  JNZ 0x004eec5b
004eec17  MOV EDX,dword ptr [EBP + -0x4]
004eec1a  MOV EAX,dword ptr [EDX + 0x428]
004eec20  MOVSX ECX,word ptr [EBP + 0x8]
004eec24  IMUL ECX,ECX,0xe
004eec27  LEA EDX,[EAX + ECX*0x1 + 0xbd0]
004eec2e  MOVSX EAX,word ptr [EBP + 0xc]
004eec32  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004eec37  SUB CX,0x1
004eec3b  MOVSX EDX,word ptr [EBP + 0xc]
004eec3f  MOVSX EAX,word ptr [EBP + 0x8]
004eec43  IMUL EAX,EAX,0xe
004eec46  MOV ESI,dword ptr [EBP + -0x4]
004eec49  MOV ESI,dword ptr [ESI + 0x428]
004eec4f  LEA EAX,[ESI + EAX*0x1 + 0xbd0]
004eec56  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004eec5b  MOVSX ECX,word ptr [EBP + 0xc]
004eec5f  CMP ECX,0x2
004eec62  JLE 0x004eed17
004eec68  MOV EDX,dword ptr [EBP + -0x4]
004eec6b  MOV EAX,dword ptr [EDX + 0x428]
004eec71  MOVSX ECX,word ptr [EBP + 0x8]
004eec75  IMUL ECX,ECX,0xe
004eec78  LEA EDX,[EAX + ECX*0x1 + 0xbd0]
004eec7f  MOVSX EAX,word ptr [EBP + 0xc]
004eec83  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004eec88  ADD CX,0x1
004eec8c  MOVSX EDX,word ptr [EBP + 0xc]
004eec90  MOVSX EAX,word ptr [EBP + 0x8]
004eec94  IMUL EAX,EAX,0xe
004eec97  MOV ESI,dword ptr [EBP + -0x4]
004eec9a  MOV ESI,dword ptr [ESI + 0x428]
004eeca0  LEA EAX,[ESI + EAX*0x1 + 0xbd0]
004eeca7  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004eecac  MOV ECX,dword ptr [EBP + -0x4]
004eecaf  MOV EDX,dword ptr [ECX + 0x428]
004eecb5  MOVSX EAX,word ptr [EBP + 0x8]
004eecb9  IMUL EAX,EAX,0xe
004eecbc  LEA ECX,[EDX + EAX*0x1 + 0xbd0]
004eecc3  MOVSX EDX,word ptr [EBP + 0xc]
004eecc7  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004eeccc  CMP EAX,0x3000
004eecd1  JNZ 0x004eed17
004eecd3  MOV ECX,dword ptr [EBP + -0x4]
004eecd6  MOV EDX,dword ptr [ECX + 0x428]
004eecdc  MOVSX EAX,word ptr [EBP + 0x8]
004eece0  IMUL EAX,EAX,0xe
004eece3  LEA ECX,[EDX + EAX*0x1 + 0xbd0]
004eecea  MOVSX EDX,word ptr [EBP + 0xc]
004eecee  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004eecf3  SUB AX,0x1
004eecf7  MOVSX ECX,word ptr [EBP + 0xc]
004eecfb  MOVSX EDX,word ptr [EBP + 0x8]
004eecff  IMUL EDX,EDX,0xe
004eed02  MOV ESI,dword ptr [EBP + -0x4]
004eed05  MOV ESI,dword ptr [ESI + 0x428]
004eed0b  LEA EDX,[ESI + EDX*0x1 + 0xbd0]
004eed12  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004eed17  MOVSX ESI,word ptr [EBP + 0xc]
004eed1b  MOV ECX,dword ptr [0x00791364]
004eed21  CALL 0x0047f950
004eed26  CMP ESI,EAX
004eed28  JGE 0x004eedde
004eed2e  MOV EAX,dword ptr [EBP + -0x4]
004eed31  MOV ECX,dword ptr [EAX + 0x428]
004eed37  MOVSX EDX,word ptr [EBP + 0x8]
004eed3b  IMUL EDX,EDX,0xe
004eed3e  LEA EAX,[ECX + EDX*0x1 + 0xbd0]
004eed45  MOVSX ECX,word ptr [EBP + 0xc]
004eed49  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004eed4e  ADD DX,0x1
004eed52  MOVSX EAX,word ptr [EBP + 0xc]
004eed56  MOVSX ECX,word ptr [EBP + 0x8]
004eed5a  IMUL ECX,ECX,0xe
004eed5d  MOV ESI,dword ptr [EBP + -0x4]
004eed60  MOV ESI,dword ptr [ESI + 0x428]
004eed66  LEA ECX,[ESI + ECX*0x1 + 0xbd0]
004eed6d  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004eed72  MOV EDX,dword ptr [EBP + -0x4]
004eed75  MOV EAX,dword ptr [EDX + 0x428]
004eed7b  MOVSX ECX,word ptr [EBP + 0x8]
004eed7f  IMUL ECX,ECX,0xe
004eed82  LEA EDX,[EAX + ECX*0x1 + 0xbd0]
004eed89  MOVSX EAX,word ptr [EBP + 0xc]
004eed8d  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004eed92  CMP ECX,0x3000
004eed98  JNZ 0x004eedde
004eed9a  MOV EDX,dword ptr [EBP + -0x4]
004eed9d  MOV EAX,dword ptr [EDX + 0x428]
004eeda3  MOVSX ECX,word ptr [EBP + 0x8]
004eeda7  IMUL ECX,ECX,0xe
004eedaa  LEA EDX,[EAX + ECX*0x1 + 0xbd0]
004eedb1  MOVSX EAX,word ptr [EBP + 0xc]
004eedb5  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004eedba  SUB CX,0x1
004eedbe  MOVSX EDX,word ptr [EBP + 0xc]
004eedc2  MOVSX EAX,word ptr [EBP + 0x8]
004eedc6  IMUL EAX,EAX,0xe
004eedc9  MOV ESI,dword ptr [EBP + -0x4]
004eedcc  MOV ESI,dword ptr [ESI + 0x428]
004eedd2  LEA EAX,[ESI + EAX*0x1 + 0xbd0]
004eedd9  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004eedde  POP ESI
004eeddf  MOV ESP,EBP
004eede1  POP EBP
004eede2  RET 0x8
