/*
 * OpenAPI Petstore
 *
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 * Generated by: https://openapi-generator.tech
 */

/// Category : A category for a pet


#[derive(Debug, PartialEq, Serialize, Deserialize)]
pub struct Category {
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<i64>,
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
}

impl Category {
    /// A category for a pet
    pub fn new() -> Category {
        Category {
            id: None,
            name: None,
        }
    }
}


