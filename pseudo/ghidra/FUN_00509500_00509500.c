// FUN_00509500  00509500

short FUN_00509500(int param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short local_c;
  
  iVar2 = FUN_0047e420();
  local_c = FUN_004d8df0(param_2);
  if ((param_1 == 7) && (cVar1 = FUN_004f6640(), cVar1 != '\0')) {
    return local_c + (short)((100 - local_c) / 2);
  }
  if ((((param_1 < 5) && (iVar3 = FUN_0047d770(), iVar3 != 0)) &&
      (*(short *)(&DAT_00792498 + iVar2 * 2) != 9)) && (cVar1 = FUN_004f6640(), cVar1 == '\0')) {
    local_c = local_c / 2;
  }
  return local_c;
}

