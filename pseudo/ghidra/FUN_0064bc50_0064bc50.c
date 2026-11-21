// FUN_0064bc50  0064bc50

void __fastcall FUN_0064bc50(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *_Str;
  size_t sVar4;
  int iVar5;
  
  iVar2 = FUN_00646e40();
  iVar3 = FUN_00646e70();
  FUN_005f5530(0x7d);
  _Str = (char *)(**(code **)(**(int **)(param_1 + 0x180) + 0xb8))();
  sVar4 = strlen(_Str);
  iVar5 = (sVar4 / 0x17) * 0x14 + 0x14;
  FUN_005f5570(iVar5);
  cVar1 = FUN_00646d10();
  (**(code **)(**(int **)(param_1 + 0x17c) + 0x44))
            (iVar2 + *(int *)(&DAT_0076d42c + (uint)(cVar1 != '\0') * 8),
             iVar3 + *(int *)(&DAT_0076d430 + (uint)(cVar1 != '\0') * 8) + (0x46 - iVar5));
  (**(code **)(**(int **)(param_1 + 0x17c) + 0x6c))(1000);
  (**(code **)(**(int **)(param_1 + 0x17c) + 0x74))();
  iVar2 = FUN_005f5550();
  FUN_005ecc60(iVar2 + -6);
  iVar2 = FUN_005f5590();
  FUN_005eccb0(iVar2 + -7);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x17c) + 0x54))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x17c) + 0x4c))(iVar2 + 4);
  (**(code **)(**(int **)(param_1 + 0x180) + 0x44))(iVar2 + 3);
  (**(code **)(**(int **)(param_1 + 0x180) + 0x6c))(0x3e9);
  (**(code **)(**(int **)(param_1 + 0x180) + 0x74))();
  return;
}

