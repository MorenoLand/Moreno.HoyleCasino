; FUN_005eebf0  005eebf0
005eebf0  PUSH EBP
005eebf1  MOV EBP,ESP
005eebf3  SUB ESP,0x14
005eebf6  MOV dword ptr [EBP + -0x10],ECX
005eebf9  MOV dword ptr [EBP + -0x4],0x0
005eec00  MOV dword ptr [EBP + -0xc],0x0
005eec07  CMP dword ptr [EBP + 0x18],0x0
005eec0b  JNZ 0x005eec16
005eec0d  MOV EAX,dword ptr [EBP + -0x10]
005eec10  MOV ECX,dword ptr [EAX + 0x5c]
005eec13  MOV dword ptr [EBP + 0x18],ECX
005eec16  CMP dword ptr [EBP + 0x8],0x0
005eec1a  JLE 0x005eec35
005eec1c  MOV EDX,dword ptr [EBP + 0x18]
005eec1f  ADD EDX,dword ptr [EBP + 0x8]
005eec22  MOVZX EAX,byte ptr [EDX]
005eec25  CMP EAX,0x20
005eec28  JNZ 0x005eec35
005eec2a  MOV ECX,dword ptr [EBP + 0x8]
005eec2d  ADD ECX,0x1
005eec30  MOV dword ptr [EBP + 0x8],ECX
005eec33  JMP 0x005eec1c
005eec35  MOV EDX,dword ptr [EBP + 0xc]
005eec38  MOV EAX,dword ptr [EBP + 0x8]
005eec3b  MOV dword ptr [EDX],EAX
005eec3d  MOV ECX,dword ptr [EBP + 0x8]
005eec40  ADD ECX,0x1
005eec43  MOV EDX,dword ptr [EBP + 0x10]
005eec46  MOV dword ptr [EDX],ECX
005eec48  MOV EAX,dword ptr [EBP + 0x14]
005eec4b  MOV dword ptr [EAX],0x0
005eec51  JMP 0x005eec5c
005eec53  MOV ECX,dword ptr [EBP + 0x8]
005eec56  ADD ECX,0x1
005eec59  MOV dword ptr [EBP + 0x8],ECX
005eec5c  MOV EDX,dword ptr [EBP + 0x18]
005eec5f  ADD EDX,dword ptr [EBP + 0x8]
005eec62  MOVZX EAX,byte ptr [EDX]
005eec65  TEST EAX,EAX
005eec67  JZ 0x005eed63
005eec6d  MOV ECX,dword ptr [EBP + 0x18]
005eec70  ADD ECX,dword ptr [EBP + 0x8]
005eec73  MOVZX EDX,byte ptr [ECX]
005eec76  CMP EDX,0x1b
005eec79  JZ 0x005eed63
005eec7f  MOV EAX,dword ptr [EBP + 0x18]
005eec82  ADD EAX,dword ptr [EBP + 0x8]
005eec85  MOVZX ECX,byte ptr [EAX + 0x1]
005eec89  TEST ECX,ECX
005eec8b  JZ 0x005eec9c
005eec8d  MOV EDX,dword ptr [EBP + 0x18]
005eec90  ADD EDX,dword ptr [EBP + 0x8]
005eec93  MOVZX EAX,byte ptr [EDX + 0x1]
005eec97  MOV dword ptr [EBP + -0x14],EAX
005eec9a  JMP 0x005eeca3
005eec9c  MOV dword ptr [EBP + -0x14],0xffffffff
005eeca3  MOV ECX,dword ptr [EBP + -0x14]
005eeca6  PUSH ECX
005eeca7  MOV EDX,dword ptr [EBP + 0x18]
005eecaa  ADD EDX,dword ptr [EBP + 0x8]
005eecad  MOV AL,byte ptr [EDX]
005eecaf  PUSH EAX
005eecb0  MOV ECX,dword ptr [EBP + -0x10]
005eecb3  CALL 0x005ee950
005eecb8  MOV ECX,dword ptr [EBP + 0x14]
005eecbb  MOV EDX,dword ptr [ECX]
005eecbd  ADD EDX,EAX
005eecbf  MOV EAX,dword ptr [EBP + -0x10]
005eecc2  MOVZX ECX,word ptr [EAX + 0x90]
005eecc9  SUB EDX,ECX
005eeccb  MOV EAX,dword ptr [EBP + -0x10]
005eecce  MOVSX ECX,word ptr [EAX + 0x94]
005eecd5  ADD EDX,ECX
005eecd7  MOV EAX,dword ptr [EBP + -0x10]
005eecda  ADD EDX,dword ptr [EAX + 0xa8]
005eece0  MOV dword ptr [EBP + -0x8],EDX
005eece3  MOV ECX,dword ptr [EBP + 0x18]
005eece6  ADD ECX,dword ptr [EBP + 0x8]
005eece9  MOVZX EDX,byte ptr [ECX]
005eecec  CMP EDX,0x20
005eecef  JNZ 0x005eed01
005eecf1  MOV EAX,dword ptr [EBP + 0x10]
005eecf4  MOV ECX,dword ptr [EAX]
005eecf6  MOV dword ptr [EBP + -0x4],ECX
005eecf9  MOV EDX,dword ptr [EBP + 0x14]
005eecfc  MOV EAX,dword ptr [EDX]
005eecfe  MOV dword ptr [EBP + -0xc],EAX
005eed01  MOV ECX,dword ptr [EBP + 0x18]
005eed04  ADD ECX,dword ptr [EBP + 0x8]
005eed07  MOVZX EDX,byte ptr [ECX]
005eed0a  CMP EDX,0xa
005eed0d  JNZ 0x005eed1c
005eed0f  MOV EAX,dword ptr [EBP + 0x8]
005eed12  ADD EAX,0x1
005eed15  MOV ECX,dword ptr [EBP + 0x10]
005eed18  MOV dword ptr [ECX],EAX
005eed1a  JMP 0x005eed63
005eed1c  MOV EDX,dword ptr [EBP + -0x10]
005eed1f  MOV EAX,dword ptr [EBP + -0x10]
005eed22  MOV ECX,dword ptr [EDX + 0x68]
005eed25  SUB ECX,dword ptr [EAX + 0x74]
005eed28  MOV EDX,dword ptr [EBP + -0x10]
005eed2b  SUB ECX,dword ptr [EDX + 0x7c]
005eed2e  CMP dword ptr [EBP + -0x8],ECX
005eed31  JLE 0x005eed4b
005eed33  CMP dword ptr [EBP + -0xc],0x0
005eed37  JZ 0x005eed49
005eed39  MOV EAX,dword ptr [EBP + 0x10]
005eed3c  MOV ECX,dword ptr [EBP + -0x4]
005eed3f  MOV dword ptr [EAX],ECX
005eed41  MOV EDX,dword ptr [EBP + 0x14]
005eed44  MOV EAX,dword ptr [EBP + -0xc]
005eed47  MOV dword ptr [EDX],EAX
005eed49  JMP 0x005eed63
005eed4b  MOV ECX,dword ptr [EBP + 0x8]
005eed4e  ADD ECX,0x1
005eed51  MOV EDX,dword ptr [EBP + 0x10]
005eed54  MOV dword ptr [EDX],ECX
005eed56  MOV EAX,dword ptr [EBP + 0x14]
005eed59  MOV ECX,dword ptr [EBP + -0x8]
005eed5c  MOV dword ptr [EAX],ECX
005eed5e  JMP 0x005eec53
005eed63  MOV ESP,EBP
005eed65  POP EBP
005eed66  RET 0x14
