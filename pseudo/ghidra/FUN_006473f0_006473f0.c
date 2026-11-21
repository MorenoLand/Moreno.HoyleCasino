// FUN_006473f0  006473f0

void __thiscall FUN_006473f0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  void *_Src;
  undefined4 uVar6;
  size_t _Size;
  
  if ((*(char *)(param_1 + 0x29) == '\0') || (*(int *)(*(int *)(param_1 + 4) + 0xc) != -1)) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0x1c))(0);
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
        uVar6 = 0;
        iVar4 = FUN_00639610(*(undefined4 *)(*(int *)(param_1 + 4) + 8),1);
        piVar3 = (int *)FUN_00603c50(0x20534443,iVar4 + param_2,uVar6);
        sVar5 = FUN_0061ed80();
        if (0x400 < (int)sVar5) {
          FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x273);
          FUN_006041d0(piVar3);
          return;
        }
        _Size = sVar5;
        _Src = (void *)(**(code **)(*piVar3 + 4))();
        memcpy(piVar1 + 0xb,_Src,_Size);
        FUN_006041d0(piVar3);
        piVar1[0x10b] = (int)sVar5 / 2;
        piVar1[0x10c] = 0;
        piVar1[9] = (int)param_3;
        (**(code **)(*piVar1 + 8))(2,0);
        return;
      }
    }
    FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x267);
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0x1c))(0);
    }
  }
  return;
}

