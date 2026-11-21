// FUN_006014a0  006014a0

void __fastcall FUN_006014a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int local_c;
  
  if (((char)param_1[6] != '\0') && (cVar1 = (**(code **)(*param_1 + 0xc))(), cVar1 != '\0')) {
    iVar2 = FUN_005eb220();
    if (iVar2 == param_1[7]) {
      local_c = param_1[8];
    }
    else {
      local_c = param_1[7];
    }
    (**(code **)(*(int *)param_1[1] + 0xb0))(local_c);
  }
  return;
}

