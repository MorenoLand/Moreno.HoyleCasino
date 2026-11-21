// FUN_005f40e0  005f40e0

int FUN_005f40e0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = FUN_0060c9a0();
  do {
    do {
      do {
        local_8 = local_8 + -1;
        if (local_8 < 0) {
          return local_c;
        }
        local_c = FUN_0060ca40(local_8);
      } while ((((*(int *)(local_c + 0x1a8) != param_3) || (*(char *)(local_c + 0x1b1) != '\0')) ||
               (cVar1 = FUN_005f8910(), cVar1 == '\0')) || (iVar2 = FUN_005f84d0(), param_1 < iVar2)
              );
      iVar2 = FUN_005f84d0();
      iVar3 = FUN_005f8550();
    } while ((iVar2 + iVar3 < param_1) || (iVar2 = FUN_005f84f0(), param_2 < iVar2));
    iVar2 = FUN_005f84f0();
    iVar3 = FUN_005f8570();
  } while (iVar2 + iVar3 < param_2);
  return local_c;
}

