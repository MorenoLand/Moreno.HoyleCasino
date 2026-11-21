// FUN_00502530  00502530

short FUN_00502530(int param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  short local_8;
  
  local_8 = FUN_004d6a60(param_2);
  if ((param_1 == 7) && (cVar1 = FUN_004f6640(), cVar1 != '\0')) {
    return local_8 + (short)((100 - local_8) / 2);
  }
  iVar2 = FUN_0047d6f0();
  if (((iVar2 == 1) && (param_1 < 5)) && (cVar1 = FUN_004f6640(), cVar1 == '\0')) {
    local_8 = local_8 / 2;
  }
  return local_8;
}

