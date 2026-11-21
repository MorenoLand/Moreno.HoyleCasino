; FUN_00590a80  00590a80
00590a80  PUSH EBP
00590a81  MOV EBP,ESP
00590a83  PUSH ECX
00590a84  PUSH ESI
00590a85  MOV dword ptr [EBP + -0x4],ECX
00590a88  MOV EAX,dword ptr [EBP + -0x4]
00590a8b  MOVZX ECX,byte ptr [EAX + 0x1dc]
00590a92  TEST ECX,ECX
00590a94  JZ 0x00590b67
00590a9a  MOV EDX,dword ptr [EBP + -0x4]
00590a9d  MOV EAX,dword ptr [EDX + 0x1e4]
00590aa3  MOV ECX,dword ptr [EAX + 0x1f0]
00590aa9  SUB ECX,0x1
00590aac  MOV EDX,dword ptr [EBP + -0x4]
00590aaf  MOV EAX,dword ptr [EDX + 0x1e4]
00590ab5  MOV dword ptr [EAX + 0x1f0],ECX
00590abb  MOV ECX,dword ptr [EBP + -0x4]
00590abe  MOV byte ptr [ECX + 0x1dc],0x0
00590ac5  PUSH 0x6bbaf0
00590aca  CALL 0x00630f40
00590acf  ADD ESP,0x4
00590ad2  PUSH EAX
00590ad3  MOV EDX,dword ptr [EBP + -0x4]
00590ad6  MOV EAX,dword ptr [EDX + 0x1e4]
00590adc  MOV ECX,dword ptr [EBP + -0x4]
00590adf  MOV EDX,dword ptr [ECX + 0x1e0]
00590ae5  IMUL EDX,EDX,0x1d0
00590aeb  MOV EAX,dword ptr [EAX + 0x1e4]
00590af1  MOV ECX,dword ptr [EBP + -0x4]
00590af4  MOV ECX,dword ptr [ECX + 0x1e4]
00590afa  MOV ESI,dword ptr [EBP + -0x4]
00590afd  MOV ESI,dword ptr [ESI + 0x1e0]
00590b03  IMUL ESI,ESI,0x1d0
00590b09  ADD ESI,dword ptr [ECX + 0x1e4]
00590b0f  MOV EDX,dword ptr [EAX + EDX*0x1]
00590b12  MOV ECX,ESI
00590b14  MOV EAX,dword ptr [EDX + 0xb4]
00590b1a  CALL EAX
00590b1c  MOV ECX,dword ptr [EBP + -0x4]
00590b1f  MOV EDX,dword ptr [ECX + 0x1e4]
00590b25  MOV EAX,dword ptr [EBP + -0x4]
00590b28  MOV ECX,dword ptr [EAX + 0x1e0]
00590b2e  IMUL ECX,ECX,0x178
00590b34  MOV EDX,dword ptr [EDX + 0x1e8]
00590b3a  MOV EAX,dword ptr [EBP + -0x4]
00590b3d  MOV EAX,dword ptr [EAX + 0x1e4]
00590b43  MOV ESI,dword ptr [EBP + -0x4]
00590b46  MOV ESI,dword ptr [ESI + 0x1e0]
00590b4c  IMUL ESI,ESI,0x178
00590b52  ADD ESI,dword ptr [EAX + 0x1e8]
00590b58  MOV EDX,dword ptr [EDX + ECX*0x1]
00590b5b  MOV ECX,ESI
00590b5d  MOV EAX,dword ptr [EDX + 0x70]
00590b60  CALL EAX
00590b62  JMP 0x00590c53
00590b67  MOV ECX,dword ptr [EBP + -0x4]
00590b6a  MOV EDX,dword ptr [ECX + 0x1e4]
00590b70  MOV EAX,dword ptr [EBP + -0x4]
00590b73  MOV ECX,dword ptr [EAX + 0x1e4]
00590b79  MOV EDX,dword ptr [EDX + 0x1f0]
00590b7f  CMP EDX,dword ptr [ECX + 0x1ec]
00590b85  JGE 0x00590c53
00590b8b  MOV EAX,dword ptr [EBP + -0x4]
00590b8e  MOV ECX,dword ptr [EAX + 0x1e4]
00590b94  MOV EDX,dword ptr [ECX + 0x1f0]
00590b9a  ADD EDX,0x1
00590b9d  MOV EAX,dword ptr [EBP + -0x4]
00590ba0  MOV ECX,dword ptr [EAX + 0x1e4]
00590ba6  MOV dword ptr [ECX + 0x1f0],EDX
00590bac  MOV EDX,dword ptr [EBP + -0x4]
00590baf  MOV byte ptr [EDX + 0x1dc],0x1
00590bb6  PUSH 0x6bbdac
00590bbb  CALL 0x00630f40
00590bc0  ADD ESP,0x4
00590bc3  PUSH EAX
00590bc4  MOV EAX,dword ptr [EBP + -0x4]
00590bc7  MOV ECX,dword ptr [EAX + 0x1e4]
00590bcd  MOV EDX,dword ptr [EBP + -0x4]
00590bd0  MOV EAX,dword ptr [EDX + 0x1e0]
00590bd6  IMUL EAX,EAX,0x1d0
00590bdc  MOV ECX,dword ptr [ECX + 0x1e4]
00590be2  MOV EDX,dword ptr [EBP + -0x4]
00590be5  MOV EDX,dword ptr [EDX + 0x1e4]
00590beb  MOV ESI,dword ptr [EBP + -0x4]
00590bee  MOV ESI,dword ptr [ESI + 0x1e0]
00590bf4  IMUL ESI,ESI,0x1d0
00590bfa  ADD ESI,dword ptr [EDX + 0x1e4]
00590c00  MOV EAX,dword ptr [ECX + EAX*0x1]
00590c03  MOV ECX,ESI
00590c05  MOV EDX,dword ptr [EAX + 0xb4]
00590c0b  CALL EDX
00590c0d  MOV EAX,dword ptr [EBP + -0x4]
00590c10  MOV ECX,dword ptr [EAX + 0x1e4]
00590c16  MOV EDX,dword ptr [EBP + -0x4]
00590c19  MOV EAX,dword ptr [EDX + 0x1e0]
00590c1f  IMUL EAX,EAX,0x178
00590c25  MOV ECX,dword ptr [ECX + 0x1e8]
00590c2b  MOV EDX,dword ptr [EBP + -0x4]
00590c2e  MOV EDX,dword ptr [EDX + 0x1e4]
00590c34  MOV ESI,dword ptr [EBP + -0x4]
00590c37  MOV ESI,dword ptr [ESI + 0x1e0]
00590c3d  IMUL ESI,ESI,0x178
00590c43  ADD ESI,dword ptr [EDX + 0x1e8]
00590c49  MOV EAX,dword ptr [ECX + EAX*0x1]
00590c4c  MOV ECX,ESI
00590c4e  MOV EDX,dword ptr [EAX + 0x74]
00590c51  CALL EDX
00590c53  MOV EAX,dword ptr [EBP + -0x4]
00590c56  MOV ECX,dword ptr [EAX + 0x1e0]
00590c5c  ADD ECX,0x1
00590c5f  PUSH ECX
00590c60  MOV EDX,dword ptr [EBP + -0x4]
00590c63  MOV ECX,dword ptr [EDX + 0x1e4]
00590c69  CALL 0x00519a40
00590c6e  POP ESI
00590c6f  MOV ESP,EBP
00590c71  POP EBP
00590c72  RET
