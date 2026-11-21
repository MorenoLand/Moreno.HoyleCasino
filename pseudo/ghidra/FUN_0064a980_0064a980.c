// FUN_0064a980  0064a980

void __fastcall FUN_0064a980(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (((char)param_1[6] != '\0') && (cVar1 = (**(code **)(*param_1 + 0xc))(), cVar1 != '\0')) {
    param_1[0x10a] = param_1[0x10a] + 1;
    if (param_1[0x10a] < param_1[0x109]) {
      *(undefined1 *)(param_1[7] + 0x5c) = 1;
      (**(code **)(*(int *)param_1[1] + 0xb0))
                (*(undefined1 *)((int)param_1 + param_1[0x10a] * 2 + 0x24));
      iVar2 = FUN_005f3e50();
      param_1[0x10e] = iVar2 + (uint)*(byte *)((int)param_1 + param_1[0x10a] * 2 + 0x25);
    }
    else {
      (**(code **)(*param_1 + 0x14))();
    }
  }
  return;
}

