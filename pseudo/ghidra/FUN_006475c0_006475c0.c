// FUN_006475c0  006475c0

void __thiscall FUN_006475c0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  void *_Src;
  undefined4 uVar5;
  size_t _Size;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x17c);
  if ((*(char *)(param_1 + 0x29) == '\0') || (piVar1 == (int *)0x0)) {
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 0x1c))(0);
    }
  }
  else {
    FUN_006464d0(1,0);
    uVar5 = 0;
    iVar2 = FUN_00639610(param_2,1);
    piVar3 = (int *)FUN_00603c50(0x20534443,iVar2 + param_3,uVar5);
    sVar4 = FUN_0061ed80();
    if ((int)sVar4 < 0x401) {
      _Size = sVar4;
      _Src = (void *)(**(code **)(*piVar3 + 4))();
      memcpy(piVar1 + 0xb,_Src,_Size);
      FUN_006041d0(piVar3);
      piVar1[0x10b] = (int)sVar4 / 2;
      piVar1[0x10c] = 0;
      piVar1[9] = (int)param_4;
      (**(code **)(*piVar1 + 8))(2,0);
    }
    else {
      FUN_005e9f20("false","..\\casinoShell\\character.cpp",0x294);
      FUN_006041d0(piVar3);
    }
  }
  return;
}

