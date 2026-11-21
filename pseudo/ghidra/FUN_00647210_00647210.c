// FUN_00647210  00647210

void __thiscall
FUN_00647210(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  size_t sVar4;
  void *_Src;
  size_t _Size;
  
  if ((*(char *)(param_1 + 0x28) == '\0') || (*(int *)(*(int *)(param_1 + 4) + 0xc) != -1)) {
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 0x1c))(0);
    }
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x17c);
    if (piVar1 != (int *)0x0) {
      piVar3 = (int *)FUN_0063aac0();
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        FUN_006464d0(1,0);
        piVar3 = (int *)FUN_00603c50(0x20534443,param_2 + param_3,0);
        sVar4 = FUN_0061ed80();
        if (0x400 < (int)sVar4) {
          FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x239);
          FUN_006041d0(piVar3);
          return;
        }
        _Size = sVar4;
        _Src = (void *)(**(code **)(*piVar3 + 4))();
        memcpy(piVar1 + 0xb,_Src,_Size);
        FUN_006041d0(piVar3);
        piVar1[0x10d] = param_2;
        piVar1[0x10b] = (int)sVar4 / 2;
        piVar1[0x10c] = 0;
        piVar1[9] = (int)param_4;
        piVar1[0x10e] = param_5;
        piVar1[0x10f] = param_6;
        (**(code **)(*piVar1 + 8))(4,0);
        return;
      }
    }
    FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x22d);
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 0x1c))(0);
    }
  }
  return;
}

