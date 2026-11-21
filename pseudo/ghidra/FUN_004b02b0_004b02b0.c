// FUN_004b02b0  004b02b0

short FUN_004b02b0(int param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  short local_8;
  
  local_8 = FUN_004ee310(param_2);
  if ((param_1 == 4) && (cVar1 = FUN_004f6640(), cVar1 != '\0')) {
    return local_8 + (short)((100 - local_8) / 2);
  }
  if (((param_1 < 3) && (iVar2 = FUN_0047e420(), *(short *)(&DAT_00791768 + iVar2 * 2) != 7)) &&
     (cVar1 = FUN_004f6640(), cVar1 == '\0')) {
    local_8 = local_8 / 2;
  }
  return local_8;
}

