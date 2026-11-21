; FUN_0068eea0  0068eea0
0068eea0  PUSH EBP
0068eea1  MOV EBP,ESP
0068eea3  SUB ESP,0x14
0068eea6  MOV dword ptr [EBP + -0x14],ECX
0068eea9  MOV EAX,dword ptr [EBP + -0x14]
0068eeac  CMP dword ptr [EAX],0x0
0068eeaf  JNZ 0x0068eeb7
0068eeb1  CALL dword ptr [0x006b2274]
0068eeb7  MOV ECX,dword ptr [EBP + -0x14]
0068eeba  MOV EDX,dword ptr [ECX + 0x4]
0068eebd  MOVSX EAX,byte ptr [EDX + 0x35]
0068eec1  TEST EAX,EAX
0068eec3  JZ 0x0068eeed
0068eec5  MOV ECX,dword ptr [EBP + -0x14]
0068eec8  MOV EDX,dword ptr [ECX + 0x4]
0068eecb  MOV EAX,dword ptr [EBP + -0x14]
0068eece  MOV ECX,dword ptr [EDX + 0x8]
0068eed1  MOV dword ptr [EAX + 0x4],ECX
0068eed4  MOV EDX,dword ptr [EBP + -0x14]
0068eed7  MOV EAX,dword ptr [EDX + 0x4]
0068eeda  MOVSX ECX,byte ptr [EAX + 0x35]
0068eede  TEST ECX,ECX
0068eee0  JZ 0x0068eee8
0068eee2  CALL dword ptr [0x006b2274]
0068eee8  JMP 0x0068ef86
0068eeed  MOV EDX,dword ptr [EBP + -0x14]
0068eef0  MOV EAX,dword ptr [EDX + 0x4]
0068eef3  MOV dword ptr [EBP + -0x8],EAX
0068eef6  MOV ECX,dword ptr [EBP + -0x8]
0068eef9  MOV EDX,dword ptr [ECX]
0068eefb  MOVSX EAX,byte ptr [EDX + 0x35]
0068eeff  TEST EAX,EAX
0068ef01  JNZ 0x0068ef38
0068ef03  MOV ECX,dword ptr [EBP + -0x14]
0068ef06  MOV EDX,dword ptr [ECX + 0x4]
0068ef09  MOV dword ptr [EBP + -0xc],EDX
0068ef0c  MOV EAX,dword ptr [EBP + -0xc]
0068ef0f  MOV ECX,dword ptr [EAX]
0068ef11  MOV dword ptr [EBP + -0x10],ECX
0068ef14  MOV EDX,dword ptr [EBP + -0x10]
0068ef17  MOV EAX,dword ptr [EDX + 0x8]
0068ef1a  MOVSX ECX,byte ptr [EAX + 0x35]
0068ef1e  TEST ECX,ECX
0068ef20  JNZ 0x0068ef2d
0068ef22  MOV EDX,dword ptr [EBP + -0x10]
0068ef25  MOV EAX,dword ptr [EDX + 0x8]
0068ef28  MOV dword ptr [EBP + -0x10],EAX
0068ef2b  JMP 0x0068ef14
0068ef2d  MOV ECX,dword ptr [EBP + -0x14]
0068ef30  MOV EDX,dword ptr [EBP + -0x10]
0068ef33  MOV dword ptr [ECX + 0x4],EDX
0068ef36  JMP 0x0068ef86
0068ef38  MOV EAX,dword ptr [EBP + -0x14]
0068ef3b  MOV ECX,dword ptr [EAX + 0x4]
0068ef3e  MOV EDX,dword ptr [ECX + 0x4]
0068ef41  MOV dword ptr [EBP + -0x4],EDX
0068ef44  MOV EAX,dword ptr [EBP + -0x4]
0068ef47  MOVSX ECX,byte ptr [EAX + 0x35]
0068ef4b  TEST ECX,ECX
0068ef4d  JNZ 0x0068ef67
0068ef4f  MOV EDX,dword ptr [EBP + -0x14]
0068ef52  MOV EAX,dword ptr [EBP + -0x4]
0068ef55  MOV ECX,dword ptr [EDX + 0x4]
0068ef58  CMP ECX,dword ptr [EAX]
0068ef5a  JNZ 0x0068ef67
0068ef5c  MOV EDX,dword ptr [EBP + -0x14]
0068ef5f  MOV EAX,dword ptr [EBP + -0x4]
0068ef62  MOV dword ptr [EDX + 0x4],EAX
0068ef65  JMP 0x0068ef38
0068ef67  MOV ECX,dword ptr [EBP + -0x14]
0068ef6a  MOV EDX,dword ptr [ECX + 0x4]
0068ef6d  MOVSX EAX,byte ptr [EDX + 0x35]
0068ef71  TEST EAX,EAX
0068ef73  JZ 0x0068ef7d
0068ef75  CALL dword ptr [0x006b2274]
0068ef7b  JMP 0x0068ef86
0068ef7d  MOV ECX,dword ptr [EBP + -0x14]
0068ef80  MOV EDX,dword ptr [EBP + -0x4]
0068ef83  MOV dword ptr [ECX + 0x4],EDX
0068ef86  MOV ESP,EBP
0068ef88  POP EBP
0068ef89  RET
