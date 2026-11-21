; FUN_004fde70  004fde70
004fde70  PUSH EBP
004fde71  MOV EBP,ESP
004fde73  PUSH -0x1
004fde75  PUSH 0x6a2904
004fde7a  MOV EAX,FS:[0x0]
004fde80  PUSH EAX
004fde81  PUSH ECX
004fde82  MOV EAX,[0x00781870]
004fde87  XOR EAX,EBP
004fde89  PUSH EAX
004fde8a  LEA EAX,[EBP + -0xc]
004fde8d  MOV FS:[0x0],EAX
004fde93  MOV dword ptr [EBP + -0x10],ECX
004fde96  MOV EAX,[0x00791ec4]
004fde9b  AND EAX,0x1
004fde9e  JNZ 0x004fdf64
004fdea4  MOV ECX,dword ptr [0x00791ec4]
004fdeaa  OR ECX,0x1
004fdead  MOV dword ptr [0x00791ec4],ECX
004fdeb3  MOV dword ptr [EBP + -0x4],0x0
004fdeba  MOV EDX,dword ptr [0x007947e0]
004fdec0  MOV EAX,dword ptr [EDX]
004fdec2  MOV ECX,dword ptr [0x007947e0]
004fdec8  MOV EDX,dword ptr [EAX + 0x23c]
004fdece  CALL EDX
004fded0  MOV [0x007205c4],EAX
004fded5  MOV EAX,[0x007947e0]
004fdeda  MOV EDX,dword ptr [EAX]
004fdedc  MOV ECX,dword ptr [0x007947e0]
004fdee2  MOV EAX,dword ptr [EDX + 0x23c]
004fdee8  CALL EAX
004fdeea  PUSH EAX
004fdeeb  MOV ECX,dword ptr [0x007947e0]
004fdef1  MOV EDX,dword ptr [ECX]
004fdef3  MOV ECX,dword ptr [0x007947e0]
004fdef9  MOV EAX,dword ptr [EDX + 0x244]
004fdeff  CALL EAX
004fdf01  MOV [0x007205c8],EAX
004fdf06  MOV dword ptr [0x007205cc],0x30e7a1
004fdf10  MOV ECX,dword ptr [0x007947e0]
004fdf16  MOV EDX,dword ptr [ECX]
004fdf18  MOV ECX,dword ptr [0x007947e0]
004fdf1e  MOV EAX,dword ptr [EDX + 0x23c]
004fdf24  CALL EAX
004fdf26  MOV [0x007205d0],EAX
004fdf2b  MOV ECX,dword ptr [0x007947e0]
004fdf31  MOV EDX,dword ptr [ECX]
004fdf33  MOV ECX,dword ptr [0x007947e0]
004fdf39  MOV EAX,dword ptr [EDX + 0x23c]
004fdf3f  CALL EAX
004fdf41  PUSH EAX
004fdf42  MOV ECX,dword ptr [0x007947e0]
004fdf48  MOV EDX,dword ptr [ECX]
004fdf4a  MOV ECX,dword ptr [0x007947e0]
004fdf50  MOV EAX,dword ptr [EDX + 0x244]
004fdf56  CALL EAX
004fdf58  MOV [0x007205d4],EAX
004fdf5d  MOV dword ptr [EBP + -0x4],0xffffffff
004fdf64  CMP dword ptr [EBP + 0x8],0x30e79d
004fdf6b  JNZ 0x004fdf74
004fdf6d  MOV EAX,0x7205c0
004fdf72  JMP 0x004fdf86
004fdf74  CMP dword ptr [EBP + 0x8],0x30e7a1
004fdf7b  JNZ 0x004fdf84
004fdf7d  MOV EAX,0x7205cc
004fdf82  JMP 0x004fdf86
004fdf84  XOR EAX,EAX
004fdf86  MOV ECX,dword ptr [EBP + -0xc]
004fdf89  MOV dword ptr FS:[0x0],ECX
004fdf90  POP ECX
004fdf91  MOV ESP,EBP
004fdf93  POP EBP
004fdf94  RET 0x4
