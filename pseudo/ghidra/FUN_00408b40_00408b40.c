// FUN_00408b40  00408b40

undefined4 __thiscall FUN_00408b40(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_8;
  
  iVar2 = param_2 * 3;
  iVar5 = -1;
  uVar3 = FUN_004091b0(param_1);
  uVar4 = FUN_004091d0();
  local_8 = iVar2;
  do {
    if (iVar2 + 3 <= local_8) {
      return 0;
    }
    cVar1 = FUN_005cb920(param_1,uVar4,iVar5,iVar2,uVar3);
    if ((cVar1 != '\0') && ((iVar5 = FUN_00408aa0(param_2,local_8), iVar5 == 1 || (iVar5 == 8)))) {
      if (local_8 == 1) {
        cVar1 = FUN_00409100();
        if (cVar1 != '\0') {
          return 1;
        }
      }
      else if ((local_8 == 2) && (cVar1 = FUN_00409120(), cVar1 != '\0')) {
        return 1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

