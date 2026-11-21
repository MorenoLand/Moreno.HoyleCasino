; FUN_005cd700  005cd700
005cd700  PUSH EBP
005cd701  MOV EBP,ESP
005cd703  SUB ESP,0xc
005cd706  MOV dword ptr [EBP + -0xc],ECX
005cd709  MOV EAX,dword ptr [EBP + 0x8]
005cd70c  ADD EAX,dword ptr [EBP + 0xc]
005cd70f  MOV dword ptr [EBP + -0x8],EAX
005cd712  XOR ECX,ECX
005cd714  CMP dword ptr [EBP + -0x8],0xcf1e
005cd71b  SETZ CL
005cd71e  MOV byte ptr [EBP + -0x1],CL
005cd721  MOVZX EDX,byte ptr [EBP + -0x1]
005cd725  TEST EDX,EDX
005cd727  JNZ 0x005cd753
005cd729  MOV EAX,dword ptr [EBP + -0xc]
005cd72c  MOV EDX,dword ptr [EAX]
005cd72e  MOV ECX,dword ptr [EBP + -0xc]
005cd731  MOV EAX,dword ptr [EDX + 0xc0]
005cd737  CALL EAX
005cd739  MOVZX ECX,AL
005cd73c  TEST ECX,ECX
005cd73e  JZ 0x005cd753
005cd740  MOV EDX,dword ptr [EBP + 0x8]
005cd743  PUSH EDX
005cd744  MOV ECX,dword ptr [EBP + -0xc]
005cd747  CALL 0x005cd830
005cd74c  MOVZX EAX,AL
005cd74f  TEST EAX,EAX
005cd751  JNZ 0x005cd76c
005cd753  CMP dword ptr [EBP + 0x10],0x0
005cd757  JZ 0x005cd76a
005cd759  MOV ECX,dword ptr [EBP + 0x14]
005cd75c  PUSH ECX
005cd75d  MOV EDX,dword ptr [EBP + 0x10]
005cd760  MOV EAX,dword ptr [EDX]
005cd762  MOV ECX,dword ptr [EBP + 0x10]
005cd765  MOV EDX,dword ptr [EAX + 0x1c]
005cd768  CALL EDX
005cd76a  JMP 0x005cd7ab
005cd76c  MOV EAX,dword ptr [EBP + -0xc]
005cd76f  ADD EAX,0x194
005cd774  PUSH EAX
005cd775  PUSH ECX
005cd776  FLD float ptr [0x006b3654]
005cd77c  FSTP float ptr [ESP]
005cd77f  PUSH ECX
005cd780  FLD1
005cd782  FSTP float ptr [ESP]
005cd785  PUSH 0x1
005cd787  PUSH 0xa
005cd789  PUSH 0x1
005cd78b  MOV ECX,dword ptr [EBP + 0x10]
005cd78e  PUSH ECX
005cd78f  MOV EDX,dword ptr [EBP + 0x8]
005cd792  ADD EDX,dword ptr [EBP + 0xc]
005cd795  PUSH EDX
005cd796  MOV EAX,[0x0162ee84]
005cd79b  MOV EDX,dword ptr [EAX]
005cd79d  MOV ECX,dword ptr [0x0162ee84]
005cd7a3  MOV EAX,dword ptr [EDX + 0x80]
005cd7a9  CALL EAX
005cd7ab  MOV ESP,EBP
005cd7ad  POP EBP
005cd7ae  RET 0x10
