#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_test = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_BANG = 13,
  anon_sym_AMP_AMP = 14,
  anon_sym_PIPE_PIPE = 15,
  anon_sym_COMMA = 16,
  anon_sym_use = 17,
  anon_sym_source = 18,
  anon_sym_header = 19,
  anon_sym_if = 20,
  anon_sym_endif = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_literal_token1 = 23,
  aux_sym_identifier_token1 = 24,
  aux_sym_identifier_expression_token1 = 25,
  sym_name = 26,
  sym_value = 27,
  sym_file_path = 28,
  sym_comment = 29,
  sym_source_file = 30,
  sym_variable = 31,
  sym_include = 32,
  sym_definition = 33,
  sym_definition_type = 34,
  sym_block = 35,
  sym__conditional = 36,
  sym__expression = 37,
  sym_unary_expression = 38,
  sym_binary_expression = 39,
  sym_comma_expression = 40,
  sym_parenthesized_expression = 41,
  sym__statement = 42,
  sym_use_statement = 43,
  sym_file_statement = 44,
  sym_if_statement = 45,
  sym_string_literal = 46,
  sym_identifier = 47,
  sym_identifier_expression = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_block_repeat1 = 50,
  aux_sym_if_statement_repeat1 = 51,
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
  [anon_sym_test] = "test",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_COMMA] = ",",
  [anon_sym_use] = "use",
  [anon_sym_source] = "source",
  [anon_sym_header] = "header",
  [anon_sym_if] = "if",
  [anon_sym_endif] = "endif",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_expression_token1] = "identifier_expression_token1",
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
  [sym_comma_expression] = "comma_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__statement] = "_statement",
  [sym_use_statement] = "use_statement",
  [sym_file_statement] = "file_statement",
  [sym_if_statement] = "if_statement",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [sym_identifier_expression] = "identifier_expression",
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
  [anon_sym_test] = anon_sym_test,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_expression_token1] = aux_sym_identifier_expression_token1,
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
  [sym_comma_expression] = sym_comma_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym__statement] = sym__statement,
  [sym_use_statement] = sym_use_statement,
  [sym_file_statement] = sym_file_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [sym_identifier_expression] = sym_identifier_expression,
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
  [anon_sym_test] = {
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
  [anon_sym_COMMA] = {
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
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_expression_token1] = {
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
  [sym_comma_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
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
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_expression] = {
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
      if (eof) ADVANCE(59);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 56:
      if (lookahead == '|') ADVANCE(81);
      END_STATE();
    case 57:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'g') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_workspace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_group);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_con);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_con);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_exe);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_exe);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_lib);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_lib);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_dll);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_dll);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_test);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_use);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_source);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_header);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_expression_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_file_path);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '/' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
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
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_identifier_expression_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_variable] = STATE(3),
    [sym_include] = STATE(3),
    [sym_definition] = STATE(3),
    [sym_definition_type] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_workspace] = ACTIONS(9),
    [anon_sym_group] = ACTIONS(9),
    [anon_sym_con] = ACTIONS(9),
    [anon_sym_exe] = ACTIONS(9),
    [anon_sym_lib] = ACTIONS(9),
    [anon_sym_dll] = ACTIONS(9),
    [anon_sym_test] = ACTIONS(9),
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
    STATE(50), 1,
      sym_definition_type,
    STATE(2), 4,
      sym_variable,
      sym_include,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(18), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
  [31] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_definition_type,
    STATE(2), 4,
      sym_variable,
      sym_include,
      sym_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 7,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
  [62] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(30), 1,
      anon_sym_use,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(36), 1,
      anon_sym_endif,
    ACTIONS(32), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(11), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [92] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      anon_sym_use,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      sym_name,
    ACTIONS(43), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(5), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [120] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(30), 1,
      anon_sym_use,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(52), 1,
      anon_sym_endif,
    ACTIONS(32), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(16), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [150] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_use,
    ACTIONS(60), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      sym_name,
    ACTIONS(58), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(5), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [178] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_use,
    ACTIONS(60), 1,
      anon_sym_if,
    ACTIONS(62), 1,
      sym_name,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(7), 6,
      sym_variable,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
  [206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(68), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [224] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_use,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      anon_sym_endif,
    ACTIONS(73), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(10), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_use,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_endif,
    ACTIONS(32), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(10), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(85), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(89), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(93), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(97), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [344] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_use,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_endif,
    ACTIONS(32), 2,
      anon_sym_source,
      anon_sym_header,
    STATE(10), 5,
      sym__statement,
      sym_use_statement,
      sym_file_statement,
      sym_if_statement,
      aux_sym_if_statement_repeat1,
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
    ACTIONS(103), 8,
      anon_sym_workspace,
      anon_sym_group,
      anon_sym_con,
      anon_sym_exe,
      anon_sym_lib,
      anon_sym_dll,
      anon_sym_test,
      sym_name,
  [386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      aux_sym_identifier_expression_token1,
    STATE(60), 1,
      sym_comma_expression,
    STATE(46), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(113), 8,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [441] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      aux_sym_identifier_expression_token1,
    STATE(56), 1,
      sym_comma_expression,
    STATE(45), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      aux_sym_identifier_expression_token1,
    STATE(49), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      aux_sym_identifier_expression_token1,
    STATE(23), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      aux_sym_identifier_expression_token1,
    STATE(4), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      aux_sym_identifier_expression_token1,
    STATE(22), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      aux_sym_identifier_expression_token1,
    STATE(20), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      aux_sym_identifier_expression_token1,
    STATE(6), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_identifier_expression,
  [629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(121), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      sym_name,
  [728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 5,
      anon_sym_use,
      anon_sym_source,
      anon_sym_header,
      anon_sym_if,
      anon_sym_endif,
  [794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      aux_sym_identifier_token1,
    STATE(33), 1,
      sym_identifier,
    STATE(51), 1,
      sym__conditional,
  [810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
  [826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
  [842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      aux_sym_identifier_token1,
    STATE(42), 1,
      sym_identifier,
    STATE(52), 1,
      sym__conditional,
  [858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      aux_sym_identifier_token1,
    STATE(59), 1,
      sym__conditional,
  [871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_AMP_AMP,
    ACTIONS(28), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_identifier_token1,
    STATE(54), 1,
      sym_identifier,
  [894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_identifier_token1,
    STATE(32), 1,
      sym_identifier,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym_identifier_token1,
    STATE(41), 1,
      sym_identifier,
  [914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_string_literal,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_identifier_token1,
  [941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
  [948] = 2,
    ACTIONS(165), 1,
      aux_sym_string_literal_token1,
    ACTIONS(167), 1,
      sym_comment,
  [955] = 2,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_file_path,
  [962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_identifier_token1,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
  [976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_value,
  [983] = 2,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_file_path,
  [990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_value,
  [1004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 206,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 248,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 290,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 326,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 368,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 424,
  [SMALL_STATE(21)] = 441,
  [SMALL_STATE(22)] = 464,
  [SMALL_STATE(23)] = 479,
  [SMALL_STATE(24)] = 494,
  [SMALL_STATE(25)] = 509,
  [SMALL_STATE(26)] = 529,
  [SMALL_STATE(27)] = 549,
  [SMALL_STATE(28)] = 569,
  [SMALL_STATE(29)] = 589,
  [SMALL_STATE(30)] = 609,
  [SMALL_STATE(31)] = 629,
  [SMALL_STATE(32)] = 644,
  [SMALL_STATE(33)] = 658,
  [SMALL_STATE(34)] = 672,
  [SMALL_STATE(35)] = 686,
  [SMALL_STATE(36)] = 700,
  [SMALL_STATE(37)] = 714,
  [SMALL_STATE(38)] = 728,
  [SMALL_STATE(39)] = 739,
  [SMALL_STATE(40)] = 750,
  [SMALL_STATE(41)] = 761,
  [SMALL_STATE(42)] = 772,
  [SMALL_STATE(43)] = 783,
  [SMALL_STATE(44)] = 794,
  [SMALL_STATE(45)] = 810,
  [SMALL_STATE(46)] = 826,
  [SMALL_STATE(47)] = 842,
  [SMALL_STATE(48)] = 858,
  [SMALL_STATE(49)] = 871,
  [SMALL_STATE(50)] = 884,
  [SMALL_STATE(51)] = 894,
  [SMALL_STATE(52)] = 904,
  [SMALL_STATE(53)] = 914,
  [SMALL_STATE(54)] = 924,
  [SMALL_STATE(55)] = 934,
  [SMALL_STATE(56)] = 941,
  [SMALL_STATE(57)] = 948,
  [SMALL_STATE(58)] = 955,
  [SMALL_STATE(59)] = 962,
  [SMALL_STATE(60)] = 969,
  [SMALL_STATE(61)] = 976,
  [SMALL_STATE(62)] = 983,
  [SMALL_STATE(63)] = 990,
  [SMALL_STATE(64)] = 997,
  [SMALL_STATE(65)] = 1004,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(47),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(62),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(30),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_statement, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_statement, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_statement, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_statement, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_type, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
