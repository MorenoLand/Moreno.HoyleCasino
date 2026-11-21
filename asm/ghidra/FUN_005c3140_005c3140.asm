; FUN_005c3140  005c3140
005c3140  PUSH EBP
005c3141  MOV EBP,ESP
005c3143  SUB ESP,0x14
005c3146  MOV dword ptr [EBP + -0x14],ECX
005c3149  MOV EAX,dword ptr [EBP + 0xc]
005c314c  PUSH EAX
005c314d  MOV ECX,dword ptr [EBP + 0x8]
005c3150  PUSH ECX
005c3151  MOV EDX,dword ptr [EBP + -0x14]
005c3154  MOV ECX,dword ptr [EDX + 0x4]
005c3157  CALL 0x005be340
005c315c  MOV dword ptr [EBP + -0x4],EAX
005c315f  MOV EAX,dword ptr [EBP + -0x14]
005c3162  MOV ECX,dword ptr [EAX + 0x50]
005c3165  ADD ECX,0x20
005c3168  MOV EDX,dword ptr [EBP + 0x10]
005c316b  MOV EAX,dword ptr [ECX]
005c316d  MOV dword ptr [EDX],EAX
005c316f  MOV EAX,dword ptr [ECX + 0x4]
005c3172  MOV dword ptr [EDX + 0x4],EAX
005c3175  MOV ECX,dword ptr [ECX + 0x8]
005c3178  MOV dword ptr [EDX + 0x8],ECX
005c317b  MOV EDX,dword ptr [EBP + -0x14]
005c317e  MOV EAX,dword ptr [EDX + 0x50]
005c3181  MOV ECX,dword ptr [EAX + 0x2c]
005c3184  IMUL ECX,dword ptr [EBP + -0x4]
005c3188  MOV EDX,dword ptr [EBP + 0x10]
005c318b  ADD ECX,dword ptr [EDX]
005c318d  MOV EAX,dword ptr [EBP + 0x10]
005c3190  MOV dword ptr [EAX],ECX
005c3192  MOV ECX,dword ptr [EBP + -0x14]
005c3195  MOV EDX,dword ptr [ECX + 0x50]
005c3198  MOV EAX,dword ptr [EDX + 0x30]
005c319b  IMUL EAX,dword ptr [EBP + -0x4]
005c319f  MOV ECX,dword ptr [EBP + 0x10]
005c31a2  ADD EAX,dword ptr [ECX + 0x4]
005c31a5  MOV EDX,dword ptr [EBP + 0x10]
005c31a8  MOV dword ptr [EDX + 0x4],EAX
005c31ab  MOV EAX,dword ptr [EBP + -0x14]
005c31ae  MOV ECX,dword ptr [EAX + 0x50]
005c31b1  MOV EDX,dword ptr [ECX + 0x34]
005c31b4  IMUL EDX,dword ptr [EBP + -0x4]
005c31b8  MOV EAX,dword ptr [EBP + 0x10]
005c31bb  ADD EDX,dword ptr [EAX + 0x8]
005c31be  MOV ECX,dword ptr [EBP + 0x10]
005c31c1  MOV dword ptr [ECX + 0x8],EDX
005c31c4  MOV ESP,EBP
005c31c6  POP EBP
005c31c7  RET 0xc
