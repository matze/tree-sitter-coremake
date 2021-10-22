#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUNDinclude = 1,
  anon_sym_workspace = 2,
  anon_sym_group = 3,
  anon_sym_con = 4,
  anon_sym_exe = 5,
  anon_sym_lib = 6,
  anon_sym_dll = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_BANG = 12,
  anon_sym_AMP_AMP = 13,
  anon_sym_PIPE_PIPE = 14,
  anon_sym_use = 15,
  anon_sym_source = 16,
  anon_sym_header = 17,
  anon_sym_if = 18,
  anon_sym_endif = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_token1 = 21,
  aux_sym_identifier_token1 = 22,
  sym_name = 23,
  sym_value = 24,
  sym_file_path = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym_variable = 28,
  sym_include = 29,
  sym_definition = 30,
  sym_definition_type = 31,
  sym_block = 32,
  sym__conditional = 33,
  sym__expression = 34,
  sym_unary_expression = 35,
  sym_binary_expression = 36,
  sym__statement = 37,
  sym_use_statement = 38,
  sym_file_statement = 39,
  sym_if_statement = 40,
  sym_string = 41,
  sym_identifier = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_block_repeat1 = 44,
  aux_sym_if_statement_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_workspace] = "workspace",
  [anon_sym_group] = "group",
  [anon_sym_con] = "con",
  [anon_sym_exe] = "exe",
  [anon_sym_lib] = "lib",
  [anon_sym_dll] = "dll",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_use] = "use",
  [anon_sym_source] = "source",
  [anon_sym_header] = "header",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_name] = "name",
  [sym_value] = "value",
  [sym_file_path] = "file_path",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_include] = "include",
  [sym_definition] = "definition",
  [sym_definition_type] = "definition_type",
  [sym_block] = "block",
  [sym__conditional] = "_conditional",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__statement] = "_statement",
  [sym_use_statement] = "use_statement",
  [sym_file_statement] = "file_statement",
  [sym_if_statement] = "if_statement",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_con] = anon_sym_con,
  [anon_sym_exe] = anon_sym_exe,
  [anon_sym_lib] = anon_sym_lib,
  [anon_sym_dll] = anon_sym_dll,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_name] = sym_name,
  [sym_value] = sym_value,
  [sym_file_path] = sym_file_path,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_include] = sym_include,
  [sym_definition] = sym_definition,
  [sym_definition_type] = sym_definition_type,
  [sym_block] = sym_block,
  [sym__conditional] = sym__conditional,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__statement] = sym__statement,
  [sym_use_statement] = sym_use_statement,
  [sym_file_statement] = sym_file_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_con] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__conditional] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_use_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_file_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == '|') ADVANCE(76);
      END_STATE();
    case 54:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_group);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_con);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_exe);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_exe);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_lib);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_lib);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_dll);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_dll);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_use);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_source);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_header);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_con] = ACTIONS(1),
    [anon_sym_exe] = ACTIONS(1),
    [anon_sym_lib] = ACTIONS(1),
    [anon_sym_dll] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym_variable] = STATE(3),
    [sym_include] = STATE(3),
    [sym_definition] = STATE(3),
    [sym_definition_type] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_workspace] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_con] = ACTIONS(9),
    [anon_sym_exe] = ACTIONS(9),
    [anon_sym_lib] = ACTIONS(9),
    [anon_sym_dll] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_POUNDinclude,
    ACTIONS(21), 1,
      sym_name,
    STATE(49), 1,
      sym_definition_type,
    STATE(2), 4,
      sym_variable,
      sym_include,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(18), 6,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [30] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_definition_type,
    STATE(2), 4,
      sym_variable,
      sym_include,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 6,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
  [60] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_use,
    ACTIONS(32), 1,
      anon_sym_if,
    ACTIONS(34), 1,
      sym_name,
    ACTIONS(30), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(8), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_use,
    ACTIONS(32), 1,
      anon_sym_if,
    ACTIONS(34), 1,
      sym_name,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(4), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [116] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_AMP_AMP,
    ACTIONS(40), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(42), 1,
      anon_sym_use,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(48), 1,
      anon_sym_endif,
    ACTIONS(44), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(10), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [146] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_AMP_AMP,
    ACTIONS(40), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(42), 1,
      anon_sym_use,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      anon_sym_endif,
    ACTIONS(44), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(9), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [176] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_use,
    ACTIONS(60), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_name,
    ACTIONS(57), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(8), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_use,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      anon_sym_endif,
    ACTIONS(44), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(12), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [228] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_use,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(68), 1,
      anon_sym_endif,
    ACTIONS(44), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(12), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(72), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [270] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_use,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(83), 1,
      anon_sym_endif,
    ACTIONS(77), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(12), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(87), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      sym_name,
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(91), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      sym_name,
  [328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(95), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      sym_name,
  [345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(99), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      sym_name,
  [362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(103), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      sym_name,
  [379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(107), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      sym_name,
  [396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 8,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 8,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 7,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_AMP_AMP,
    ACTIONS(109), 6,
      anon_sym_PIPE_PIPE,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      aux_sym_identifier_token1,
    STATE(20), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(6), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      aux_sym_identifier_token1,
    STATE(19), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      aux_sym_identifier_token1,
    STATE(46), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(22), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(19), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(7), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(20), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      aux_sym_identifier_token1,
    STATE(45), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_identifier,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_identifier_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(48), 1,
      sym__conditional,
  [751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_identifier,
    STATE(50), 1,
      sym__conditional,
  [767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(147), 1,
      anon_sym_PIPE_PIPE,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AMP_AMP,
    ACTIONS(109), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
  [791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      aux_sym_identifier_token1,
    STATE(56), 1,
      sym__conditional,
  [804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_identifier_token1,
    STATE(37), 1,
      sym_identifier,
  [814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_identifier_token1,
    STATE(51), 1,
      sym_identifier,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_identifier_token1,
    STATE(38), 1,
      sym_identifier,
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_string,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [861] = 2,
    ACTIONS(157), 1,
      aux_sym_string_token1,
    ACTIONS(159), 1,
      sym_comment,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_identifier_token1,
  [875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
  [889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_value,
  [896] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_file_path,
  [903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_value,
  [910] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_file_path,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 204,
  [SMALL_STATE(10)] = 228,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 345,
  [SMALL_STATE(17)] = 362,
  [SMALL_STATE(18)] = 379,
  [SMALL_STATE(19)] = 396,
  [SMALL_STATE(20)] = 410,
  [SMALL_STATE(21)] = 424,
  [SMALL_STATE(22)] = 437,
  [SMALL_STATE(23)] = 452,
  [SMALL_STATE(24)] = 466,
  [SMALL_STATE(25)] = 482,
  [SMALL_STATE(26)] = 498,
  [SMALL_STATE(27)] = 514,
  [SMALL_STATE(28)] = 530,
  [SMALL_STATE(29)] = 546,
  [SMALL_STATE(30)] = 562,
  [SMALL_STATE(31)] = 578,
  [SMALL_STATE(32)] = 594,
  [SMALL_STATE(33)] = 610,
  [SMALL_STATE(34)] = 624,
  [SMALL_STATE(35)] = 638,
  [SMALL_STATE(36)] = 652,
  [SMALL_STATE(37)] = 666,
  [SMALL_STATE(38)] = 680,
  [SMALL_STATE(39)] = 691,
  [SMALL_STATE(40)] = 702,
  [SMALL_STATE(41)] = 713,
  [SMALL_STATE(42)] = 724,
  [SMALL_STATE(43)] = 735,
  [SMALL_STATE(44)] = 751,
  [SMALL_STATE(45)] = 767,
  [SMALL_STATE(46)] = 780,
  [SMALL_STATE(47)] = 791,
  [SMALL_STATE(48)] = 804,
  [SMALL_STATE(49)] = 814,
  [SMALL_STATE(50)] = 824,
  [SMALL_STATE(51)] = 834,
  [SMALL_STATE(52)] = 844,
  [SMALL_STATE(53)] = 854,
  [SMALL_STATE(54)] = 861,
  [SMALL_STATE(55)] = 868,
  [SMALL_STATE(56)] = 875,
  [SMALL_STATE(57)] = 882,
  [SMALL_STATE(58)] = 889,
  [SMALL_STATE(59)] = 896,
  [SMALL_STATE(60)] = 903,
  [SMALL_STATE(61)] = 910,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(44),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(59),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(25),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_statement, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_statement, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_coremake(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
