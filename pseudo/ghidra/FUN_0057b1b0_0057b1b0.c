// FUN_0057b1b0  0057b1b0

void __fastcall FUN_0057b1b0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char local_31;
  int local_c;
  
  if ((((*(char *)(param_1 + 0x1bc) == '\0') && (*(char *)(param_1 + 0x1bd) == '\0')) ||
      (*(int *)(param_1 + 0x19d4) == 0)) || (**(char **)(param_1 + 0x19d0) == '\0')) {
    FUN_005f83d0(0x4cb,0);
    piVar1 = (int *)FUN_005fb630(0);
    (**(code **)(*piVar1 + 0x70))();
    piVar1 = (int *)FUN_005fb630(1);
    (**(code **)(*piVar1 + 0x70))();
  }
  else {
    for (local_c = 2; local_c < *(int *)(param_1 + 0x19d4); local_c = local_c + 1) {
      if (*(char *)(*(int *)(param_1 + 0x19d0) + local_c * 0x224) == '\0') {
        FUN_005f83d0(0x4cb,local_c + -1);
        break;
      }
    }
    if (local_c == *(int *)(param_1 + 0x19d4)) {
      FUN_005f83d0(0x4cb,*(int *)(param_1 + 0x19d4) + -1);
    }
    piVar1 = (int *)FUN_005fb630(0);
    (**(code **)(*piVar1 + 0x74))();
    piVar1 = (int *)FUN_005fb630(1);
    (**(code **)(*piVar1 + 0x74))();
  }
  if (((*(int *)(param_1 + 0x19d4) == 0) || (**(char **)(param_1 + 0x19d0) == '\0')) ||
     ((*(char *)(param_1 + 0x1c4) == '\0' ||
      ((*(char *)(param_1 + 0x1bc) == '\0' && (*(char *)(param_1 + 0x1bd) == '\0')))))) {
    piVar1 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar1 + 0x70))();
  }
  else {
    piVar1 = (int *)FUN_005fb300(0);
    (**(code **)(*piVar1 + 0x74))();
  }
  FUN_0057b050();
  uVar2 = FUN_005f3bf0();
  iVar3 = FUN_006352f0(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_005f3bf0();
    iVar3 = (**(code **)(*DAT_0162ee84 + 0xe0))(uVar2);
    if (iVar3 == 0) {
      local_31 = '\0';
    }
    else {
      uVar2 = FUN_005f3bf0();
      piVar1 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar2);
      local_31 = (**(code **)(*piVar1 + 0x90))();
    }
    if ((((local_31 == '\0') || (*(int *)(param_1 + 0x19d4) == 0)) ||
        (**(char **)(param_1 + 0x19d0) == '\0')) ||
       ((*(char *)(param_1 + 0x1bc) == '\0' && (*(char *)(param_1 + 0x1bd) == '\0')))) {
      piVar1 = (int *)FUN_005fb350(1);
      (**(code **)(*piVar1 + 0x70))();
    }
    else {
      piVar1 = (int *)FUN_005fb350(1);
      (**(code **)(*piVar1 + 0x74))();
    }
  }
  if ((*(char *)(param_1 + 0x1c5) == '\0') ||
     ((*(char *)(param_1 + 0x1bc) == '\0' && (*(char *)(param_1 + 0x1bd) == '\0')))) {
    piVar1 = (int *)FUN_005fb550(0);
    (**(code **)(*piVar1 + 0x70))();
  }
  else {
    piVar1 = (int *)FUN_005fb550(0);
    uVar2 = FUN_00630f40(param_1 + 0x1c5);
    (**(code **)(*piVar1 + 0xb4))(uVar2);
    piVar1 = (int *)FUN_005fb550(0);
    (**(code **)(*piVar1 + 0x74))();
  }
  local_c = 0;
  do {
    if (*(int *)(param_1 + 0x19d4) <= local_c) {
      return;
    }
    iVar3 = strcmp((char *)(local_c * 0x224 + *(int *)(param_1 + 0x19d0)),"SID_TUTORIAL_HINTBUTTON")
    ;
    if (iVar3 == 0) {
LAB_0057b577:
      (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_c * 4) + 0x70))();
    }
    else {
      iVar3 = strcmp((char *)(local_c * 0x224 + *(int *)(param_1 + 0x19d0)),
                     "SID_TUTORIAL_PRACTICEMODE");
      if (iVar3 == 0) goto LAB_0057b577;
      if ((*(char *)(*(int *)(param_1 + 0x19d0) + local_c * 0x224) == '\0') ||
         ((*(char *)(param_1 + 0x1bc) == '\0' && (*(char *)(param_1 + 0x1bd) == '\0')))) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_c * 4) + 0x70))();
      }
      else {
        if (*(char *)(*(int *)(param_1 + 0x19d0) + 0x218 + local_c * 0x224) == '\0') {
          uVar2 = FUN_00630f40(local_c * 0x224 + *(int *)(param_1 + 0x19d0));
          (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_c * 4) + 0xb4))(uVar2);
        }
        else {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_c * 4) + 0xb4))
                    (*(undefined4 *)(*(int *)(param_1 + 0x19d0) + 0x21c + local_c * 0x224));
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_c * 4) + 0x74))();
      }
    }
    local_c = local_c + 1;
  } while( true );
}

