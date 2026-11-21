; FUN_004ceb90  004ceb90
004ceb90  PUSH EBP
004ceb91  MOV EBP,ESP
004ceb93  PUSH ECX
004ceb94  PUSH ESI
004ceb95  MOV dword ptr [EBP + -0x4],ECX
004ceb98  MOVSX EAX,word ptr [EBP + 0x8]
004ceb9c  TEST EAX,EAX
004ceb9e  JGE 0x004cebb7
004ceba0  PUSH 0xc92
004ceba5  PUSH 0x6bf384
004cebaa  PUSH 0x6bf888
004cebaf  CALL 0x005e9f20
004cebb4  ADD ESP,0xc
004cebb7  MOVSX ESI,word ptr [EBP + 0x8]
004cebbb  MOV ECX,dword ptr [0x00791364]
004cebc1  CALL 0x0047f950
004cebc6  CMP ESI,EAX
004cebc8  JL 0x004cebe1
004cebca  PUSH 0xc93
004cebcf  PUSH 0x6bf384
004cebd4  PUSH 0x6bf858
004cebd9  CALL 0x005e9f20
004cebde  ADD ESP,0xc
004cebe1  MOVSX EAX,word ptr [EBP + 0xc]
004cebe5  CMP EAX,0x2
004cebe8  JGE 0x004cec01
004cebea  PUSH 0xc94
004cebef  PUSH 0x6bf384
004cebf4  PUSH 0x6bf778
004cebf9  CALL 0x005e9f20
004cebfe  ADD ESP,0xc
004cec01  MOVSX ESI,word ptr [EBP + 0xc]
004cec05  MOV ECX,dword ptr [0x00791364]
004cec0b  CALL 0x0047f950
004cec10  CMP ESI,EAX
004cec12  JLE 0x004cec2b
004cec14  PUSH 0xc95
004cec19  PUSH 0x6bf384
004cec1e  PUSH 0x6bf740
004cec23  CALL 0x005e9f20
004cec28  ADD ESP,0xc
004cec2b  MOVSX EAX,word ptr [EBP + 0x8]
004cec2f  IMUL EAX,EAX,0xe
004cec32  MOV ECX,dword ptr [EBP + -0x4]
004cec35  MOV EDX,dword ptr [ECX + 0x428]
004cec3b  ADD EDX,EAX
004cec3d  MOVSX EAX,word ptr [EBP + 0xc]
004cec41  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004cec46  ADD CX,0x1
004cec4a  MOVSX EDX,word ptr [EBP + 0xc]
004cec4e  MOVSX EAX,word ptr [EBP + 0x8]
004cec52  IMUL EAX,EAX,0xe
004cec55  MOV ESI,dword ptr [EBP + -0x4]
004cec58  ADD EAX,dword ptr [ESI + 0x428]
004cec5e  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004cec63  MOVSX ECX,word ptr [EBP + 0x8]
004cec67  IMUL ECX,ECX,0xe
004cec6a  MOV EDX,dword ptr [EBP + -0x4]
004cec6d  MOV EAX,dword ptr [EDX + 0x428]
004cec73  ADD EAX,ECX
004cec75  MOVSX ECX,word ptr [EBP + 0xc]
004cec79  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004cec7e  CMP EDX,0x3000
004cec84  JNZ 0x004cecbe
004cec86  MOVSX EAX,word ptr [EBP + 0x8]
004cec8a  IMUL EAX,EAX,0xe
004cec8d  MOV ECX,dword ptr [EBP + -0x4]
004cec90  MOV EDX,dword ptr [ECX + 0x428]
004cec96  ADD EDX,EAX
004cec98  MOVSX EAX,word ptr [EBP + 0xc]
004cec9c  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004ceca1  SUB CX,0x1
004ceca5  MOVSX EDX,word ptr [EBP + 0xc]
004ceca9  MOVSX EAX,word ptr [EBP + 0x8]
004cecad  IMUL EAX,EAX,0xe
004cecb0  MOV ESI,dword ptr [EBP + -0x4]
004cecb3  ADD EAX,dword ptr [ESI + 0x428]
004cecb9  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004cecbe  MOVSX ECX,word ptr [EBP + 0xc]
004cecc2  CMP ECX,0x2
004cecc5  JLE 0x004ced5e
004ceccb  MOVSX EDX,word ptr [EBP + 0x8]
004ceccf  IMUL EDX,EDX,0xe
004cecd2  MOV EAX,dword ptr [EBP + -0x4]
004cecd5  MOV ECX,dword ptr [EAX + 0x428]
004cecdb  ADD ECX,EDX
004cecdd  MOVSX EDX,word ptr [EBP + 0xc]
004cece1  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004cece6  ADD AX,0x1
004cecea  MOVSX ECX,word ptr [EBP + 0xc]
004cecee  MOVSX EDX,word ptr [EBP + 0x8]
004cecf2  IMUL EDX,EDX,0xe
004cecf5  MOV ESI,dword ptr [EBP + -0x4]
004cecf8  ADD EDX,dword ptr [ESI + 0x428]
004cecfe  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004ced03  MOVSX EAX,word ptr [EBP + 0x8]
004ced07  IMUL EAX,EAX,0xe
004ced0a  MOV ECX,dword ptr [EBP + -0x4]
004ced0d  MOV EDX,dword ptr [ECX + 0x428]
004ced13  ADD EDX,EAX
004ced15  MOVSX EAX,word ptr [EBP + 0xc]
004ced19  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x6]
004ced1e  CMP ECX,0x3000
004ced24  JNZ 0x004ced5e
004ced26  MOVSX EDX,word ptr [EBP + 0x8]
004ced2a  IMUL EDX,EDX,0xe
004ced2d  MOV EAX,dword ptr [EBP + -0x4]
004ced30  MOV ECX,dword ptr [EAX + 0x428]
004ced36  ADD ECX,EDX
004ced38  MOVSX EDX,word ptr [EBP + 0xc]
004ced3c  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004ced41  SUB AX,0x1
004ced45  MOVSX ECX,word ptr [EBP + 0xc]
004ced49  MOVSX EDX,word ptr [EBP + 0x8]
004ced4d  IMUL EDX,EDX,0xe
004ced50  MOV ESI,dword ptr [EBP + -0x4]
004ced53  ADD EDX,dword ptr [ESI + 0x428]
004ced59  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004ced5e  MOVSX ESI,word ptr [EBP + 0xc]
004ced62  MOV ECX,dword ptr [0x00791364]
004ced68  CALL 0x0047f950
004ced6d  CMP ESI,EAX
004ced6f  JGE 0x004cee08
004ced75  MOVSX EAX,word ptr [EBP + 0x8]
004ced79  IMUL EAX,EAX,0xe
004ced7c  MOV ECX,dword ptr [EBP + -0x4]
004ced7f  MOV EDX,dword ptr [ECX + 0x428]
004ced85  ADD EDX,EAX
004ced87  MOVSX EAX,word ptr [EBP + 0xc]
004ced8b  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004ced90  ADD CX,0x1
004ced94  MOVSX EDX,word ptr [EBP + 0xc]
004ced98  MOVSX EAX,word ptr [EBP + 0x8]
004ced9c  IMUL EAX,EAX,0xe
004ced9f  MOV ESI,dword ptr [EBP + -0x4]
004ceda2  ADD EAX,dword ptr [ESI + 0x428]
004ceda8  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004cedad  MOVSX ECX,word ptr [EBP + 0x8]
004cedb1  IMUL ECX,ECX,0xe
004cedb4  MOV EDX,dword ptr [EBP + -0x4]
004cedb7  MOV EAX,dword ptr [EDX + 0x428]
004cedbd  ADD EAX,ECX
004cedbf  MOVSX ECX,word ptr [EBP + 0xc]
004cedc3  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x2]
004cedc8  CMP EDX,0x3000
004cedce  JNZ 0x004cee08
004cedd0  MOVSX EAX,word ptr [EBP + 0x8]
004cedd4  IMUL EAX,EAX,0xe
004cedd7  MOV ECX,dword ptr [EBP + -0x4]
004cedda  MOV EDX,dword ptr [ECX + 0x428]
004cede0  ADD EDX,EAX
004cede2  MOVSX EAX,word ptr [EBP + 0xc]
004cede6  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004cedeb  SUB CX,0x1
004cedef  MOVSX EDX,word ptr [EBP + 0xc]
004cedf3  MOVSX EAX,word ptr [EBP + 0x8]
004cedf7  IMUL EAX,EAX,0xe
004cedfa  MOV ESI,dword ptr [EBP + -0x4]
004cedfd  ADD EAX,dword ptr [ESI + 0x428]
004cee03  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004cee08  POP ESI
004cee09  MOV ESP,EBP
004cee0b  POP EBP
004cee0c  RET 0x8
