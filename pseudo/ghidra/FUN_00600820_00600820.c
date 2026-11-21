// FUN_00600820  00600820

void __fastcall FUN_00600820(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (((char)param_1[6] != '\0') && (cVar1 = (**(code **)(*param_1 + 0xc))(), cVar1 != '\0')) {
    param_1[9] = param_1[9] + 1;
    iVar2 = FUN_0061ed80();
    if (param_1[9] < iVar2 / 2) {
      iVar2 = (**(code **)(*(int *)param_1[8] + 4))();
      (**(code **)(*(int *)param_1[1] + 0xb0))(*(undefined1 *)(iVar2 + param_1[9] * 2));
      iVar2 = FUN_005f3e50();
      iVar3 = (**(code **)(*(int *)param_1[8] + 4))();
      param_1[10] = iVar2 + (uint)*(byte *)(iVar3 + 1 + param_1[9] * 2);
    }
    else {
      (**(code **)(*param_1 + 0x14))();
    }
  }
  return;
}

