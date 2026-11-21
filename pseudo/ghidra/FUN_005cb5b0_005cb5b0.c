// FUN_005cb5b0  005cb5b0

bool __fastcall FUN_005cb5b0(int *param_1)

{
  char cVar1;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0);
  cVar1 = (**(code **)(*param_1 + 0xb0))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xc4))(&local_c,0,1);
  }
  return cVar1 != '\0';
}

